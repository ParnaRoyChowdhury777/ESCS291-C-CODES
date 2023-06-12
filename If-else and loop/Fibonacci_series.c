#include<stdio.h>
int main()
{
int i,n;
int t1=0,t2=1,term;
term=t1+t2;
printf("\n Enter the number of terms: ");
scanf("%d",&n);
printf("\n The Fibonacci series upto %d is : ",n);
printf("\n%d %d ",t1,t2);
for(i=3;i<=n;i++)
{
printf("%d ",term);
t1=t2;
t2=term;
term=t1+t2;
}
return 0;
}
