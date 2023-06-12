#include<stdio.h>

int main()
{
int num;
printf("\n Enter the number : ");
scanf("%d",&num);

if(num>0)
printf("\n The number %d is positive",num);
else if(num==0)
printf("\n The number %d is neither positive nor negative but it is zero",num);
else
printf("\n The number %d is negative",num);
return 0;
}
