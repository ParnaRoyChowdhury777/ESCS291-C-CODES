#include<stdio.h>
int main()
{
int arr[100],i,n,num,first,last,middle;
printf("Enter the size of the array: \n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter element %d : \n",i+1);
scanf("%d",&arr[i]);
}
printf("Enter the number to be searched : \n");
scanf("%d",&num);
first=0;
last=n-1;
middle=(first+last)/2;

while(first<=last)
{
if(arr[middle]<num)
first=middle+1;
else if(arr[middle]==num)
{
printf("%d is found at location %d\n",num,middle+1);
break;
}
else
last=middle-1;
middle=(first+last)/2;
}
if(first>last)
printf("%d is not found in the array\n",num);
return 0;
}

