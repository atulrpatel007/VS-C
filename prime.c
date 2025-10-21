#include <stdio.h>

int main() {
    int i, num, j = 0;

    
    printf("Enter any number to check for Prime: ");
    scanf("%d", &num);


    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

 
    for (i = 2; i <= num / 2; i++) {
       
        if (num % i == 0) {
            j++;
            break; 
        }
    }

   
    if (j == 0) {
        printf("%d is a Prime number.\n", num);
    } else {
        printf("%d is not a Prime number.\n", num);
    }

    return 0;
}
    
   
