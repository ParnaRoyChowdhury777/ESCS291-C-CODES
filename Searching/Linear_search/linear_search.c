#include<stdio.h>
int main()
{
int arr[100],i,n,num,count=0;
printf("Enter the size of the array: \n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter element %d : \n",i+1);
scanf("%d",&arr[i]);
}
printf("Enter the number to be searched : \n");
scanf("%d",&num);
for(i=0;i<n;i++)
{
if(arr[i]==num)
{
count++;
printf("%d is present at position %d\n",num,i);
}
}
if(count==0)
printf("%d is not found in the array\n",num);
else
printf("%d is present %d times in the array\n",num,count);
return 0;
}

