#include<stdio.h>
int main()
{
int num,i;
long fact=1;
printf("\n Enter the number : ");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
fact=fact*i;
}
printf("\n The factorial of the number %d is %ld",num,fact);
return 0;
}

