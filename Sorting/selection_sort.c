#include<stdio.h>
int main()
{
 int arr[100],n,i,pos,j,temp;
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
  pos=i;
  for(j=i+1;j<n;j++)
  {
   if(arr[pos]>arr[j])
   pos=j;
  }
 if(pos!=i)
  {
   temp=arr[i];
   arr[i]=arr[pos];
   arr[pos]=temp;
  }
 }
 printf("The sorted(selection sort) array is:\n");
 for(i=0;i<n;i++)
 printf("%d ",arr[i]);
 return 0;
}



