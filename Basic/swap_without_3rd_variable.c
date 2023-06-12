#include<stdio.h>

int main()
{
int a,b;
printf("\n Enter the first number : ");
scanf("%d",&a);
printf("\n Enter the second number : ");
scanf("%d",&b);

printf("Before swapping, first number is %d and second number is %d",a,b);

a=a+b;
b=a-b;
a=a-b;

printf("\n After swapping the first number is %d and second number is %d",a,b);
return 0;
}