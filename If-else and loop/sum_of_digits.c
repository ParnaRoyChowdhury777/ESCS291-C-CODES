#include<stdio.h>
int main()
{
int num,d,sum=0;
printf("\n Enter the number: ");
scanf("%d",&num);
while(num>0)
{
d=num%10;
num=num/10;
sum=sum+d;
}
printf("\n The sum of the digits is % d",sum);
return 0;
}
