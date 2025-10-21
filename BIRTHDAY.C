#include <stdio.h>
#include <time.h>

struct Date {
    int day;
    int month;
    int year;
};

int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;
    }
    return 0;
}

int daysInMonth(int month, int year) {
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year)) {
        return 29;
    }
    return days[month - 1];
}

void calculateAge(struct Date birthDate, struct Date currentDate) {
    int years, months, days;
    
    if (currentDate.day >= birthDate.day) {
        days = currentDate.day - birthDate.day;
    } else {
        months = currentDate.month - 1;
        if (months < 1) {
            months = 12;
            currentDate.year--;
        }
        days = currentDate.day + daysInMonth(months, currentDate.year) - birthDate.day;
    }
    
    if (currentDate.month >= birthDate.month) {
        months = currentDate.month - birthDate.month;
        years = currentDate.year - birthDate.year;
    } else {
        months = currentDate.month + 12 - birthDate.month;
        years = currentDate.year - birthDate.year - 1;
    }
    
    printf("Age: %d years, %d months, %d days\n", years, months, days);
}

int main() {
    
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    struct Date currentDate = {tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900};
    int d,m,y;
    printf("Enter the date : ");
    scanf("%d",&d);
    printf("Enter the month : ");
    scanf("%d",&m);
    printf("Enter the year : ");
    scanf("%d",&y);
    struct Date birthDate = {d, m, y};
    
    printf("Current Date: %d-%d-%d\n", currentDate.day, currentDate.month, currentDate.year);
    printf("Birth Date: %d-%d-%d\n", birthDate.day, birthDate.month, birthDate.year);
    
    calculateAge(birthDate, currentDate);
    
    return 0;
}