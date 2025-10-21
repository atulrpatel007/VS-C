#include <stdio.h>
int main() {
    int n, original, i = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    original = n;  
    int binary[32]; 
    if (n == 0) 
    {
        printf("0\n");
        return 0;
    }
    while (n > 0) {
        binary[i] = n % 8;
        n = n / 8;
        i++;
    }
    printf("Binary of %d is: ", original);
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    return 0;
}