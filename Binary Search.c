#include <stdio.h>
int binarysearch(int arr[],int low,int high, int target)
{
    while (low<=high)
    {
     int mid=(low+high)/2;
     if (arr[mid]==target)
     {
         mid++;
        return mid;
     }
     else if (arr[mid]<target)
     {
        low=mid+1;
     }
     else
     {
        high=mid-1;
     }
    }   
    return -1; 
}
int main()
{
 int arr[78];
 for (int i = 0; i < 5; i++)
 {
    printf("Enter the number : ");
    scanf("%d",&arr[i]);
 }
 int a;
 for (int j = 0;  j<5; j++) {
      for ( int k= j + 1;k< 5; k++) {
         if (arr[j] > arr[k]) {
            a = arr[j];
            arr[j] = arr[k];
            arr[k] = a;
         }
      }
   }
 int target;
 printf("Enter the target number : ");
 scanf("%d",&target);
 int out=binarysearch(arr,0,5,target);
 if(out!=-1)
 {
    printf("ELEMENT FOUND : %d",out);
 }
 else
 {
     printf("ELEMENT FOUND NOT FOUND");
 }
 return 0;
}