#include<stdio.h>
int main()
{  
     int a,n,i,j;
    printf("Enter the number");
    scanf("%d",&a);
    printf("Enter the number till which you want table");
    scanf("%d",&n);
    for ( i = 0; i < n+1; i++)
    { 
      j=a*i;
      printf("%d x %d = %d",a,i,j);
    }
    
    return 0;
}
