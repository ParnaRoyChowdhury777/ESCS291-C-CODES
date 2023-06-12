#include<stdio.h>
int main()
{
int n,i,sum=0;
printf("\n Enter the value of n: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("\n The sum of the given series upto %d is %d",n,sum);
return 0;
}
