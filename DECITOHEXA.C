#include <stdio.h>
int main() 
{
    int n, original, i = 0;
    char hex[32]; 
    printf("Enter the number: ");
    scanf("%d", &n);
    original = n;  
    if (n == 0) {
        printf("Hexadecimal of %d is: 0\n", original);
        return 0;
    }
    while (n > 0) {
        int remainder = n % 16;
        if (remainder < 10)
            hex[i] = '0' + remainder; 
            hex[i] = 'A' + (remainder - 10); 
        i++;
    }
    printf("Hexadecimal of %d is: ", original);
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }
    printf("\n");
    return 0;
}
