#include <mysql.h>
#include <stdio.h>

int main() {
    MYSQL *conn;
    MYSQL_RES *res;
    MYSQL_ROW row;
    char *server = "localhost";
    char *user = "atul,";
    char *password = "root";
    char *database = "student";

    conn = mysql_init(NULL);

    if (!mysql_real_connect(conn, server, user, password, database, 0, NULL, 0)) {
        fprintf(stderr, "Failed to connect to database: %s\n", mysql_error(conn));
        return 1;
    }

    if (mysql_query(conn, "SELECT * FROM customers")) {
        fprintf(stderr, "Failed to execute query: %s\n", mysql_error(conn));
        mysql_close(conn);
        return 1;
    }

    res = mysql_use_result(conn);

    while ((row = mysql_fetch_row(res)) != NULL) {
        printf("%s\n", row[0]); // Assuming the first column is a string
    }

    mysql_free_result(res);
    mysql_close(conn);

    return 0;
}