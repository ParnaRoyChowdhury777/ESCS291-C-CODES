#include<stdio.h>
int main()
{
int arr[100],max,min,i,n,sec_largest;
printf("Enter the size of the array : \n");
scanf("%d",&n);
printf("Enter the numbers in the array : \n");
for(i=0;i<n;i++)
{
printf("Enter element %d ",i);
scanf("%d",&arr[i]);
}
max=arr[0];
min=arr[0];
sec_largest=arr[1];
for(i=0;i<n;i++)
{
if(max<arr[i])
{
    sec_largest=max;
    max=arr[i];
}
else if(arr[i]>sec_largest && arr[i]!=max)
sec_largest=arr[i];

if(min>arr[i])
min=arr[i];
}
printf("The largest element is : %d\n",max);
printf("The second largest element is : %d\n",sec_largest);
printf("The smallest element is : %d\n",min);
return 0;
}
