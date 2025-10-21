#include <stdio.h>
#include <string.h>

int main() {
    char st[100];
    printf("Enter the word: ");
    scanf("%s", st); 
    int d = strlen(st);
    int isPalindrome = 1;  

    for (int i = 0; i < d / 2; i++) {
        if (st[i] != st[d - i - 1]) {
            isPalindrome = 0;  
            break;
        }
    }

    if (isPalindrome) {
        printf("Yes, it's a palindrome.\n");
    } else {
        printf("No, it's not a palindrome.\n");
    }

    return 0;
}