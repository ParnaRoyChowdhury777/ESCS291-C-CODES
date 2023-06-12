#include<stdio.h>
#include<math.h>

int main()
{
int num,d,copy,temp,sum=0,count=0;
printf("\n Enter the number : ");
scanf("%d",&num);
copy=num;
temp=num;

while(num>0)
{
d=num%10;
num=num/10;
count++;
}

while(copy>0)
{
d=copy%10;
copy=copy/10;
sum=sum+pow(d,count);
}

if(sum==temp)
printf("\n %d is an Armstrong number",temp);
else
printf("\n %d is not an Armstrong number",temp);
return 0;
}

