#include<stdio.h>
int main()
{
 int arr[100],n,i,j,temp;
 printf("Enter the size of the array: \n");
 scanf("%d",&n);
 printf("Enter the elements of the array : \n");
 for(i=0;i<n;i++)
 {
  printf("Enter element %d\n",i+1);
  scanf("%d",&arr[i]);
 }
 for(i=0;i<n-1;i++)
 {
  for(j=0;j<n-i-1;j++)
  {
   if(arr[j]>arr[j+1])
   { 
     temp=arr[j];
     arr[j]=arr[j+1];
     arr[j+1]=temp;
   }
  } 
 }
  printf("The sorted(bubble sort) array is :\n");
  for(i=0;i<n;i++)
  printf("%d ",arr[i]);
  printf("\n");
  return 0;
}

