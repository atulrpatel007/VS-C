#include<stdio.h>
int main()
{  int a,count=0;
   int arr[10]={0,1,2,3,4,5,6,7,8,9};
   printf("Enter your input number : ");
   scanf("%d",&a);
   for (int i = 0; i < 10; i++)
   {
    if(arr[i]=a)
    {
     printf("The location of the number in array is %d",i);
     break;/* code */
    }
   count++;
   }
   if(count=9)
   {
    printf("NUMBER NOT FOUND IN THE ARRAY");
   }
    return 0;
}