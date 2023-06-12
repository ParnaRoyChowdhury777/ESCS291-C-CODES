#include<stdio.h>
int main()
{
int num,i,flag=0;
printf("\n Enter the number : ");
scanf("%d",&num);
for(i=1;i<=num/2;i++)
{
if(num==i*i)
{
flag=1;
break;
}
}
if(flag==0)
printf("\n %d is not a perfect square number",num);
else
printf("\n %d is a perfect square number",num);
return 0;
}

