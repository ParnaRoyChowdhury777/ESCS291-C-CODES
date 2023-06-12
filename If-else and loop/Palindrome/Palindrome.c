#include<stdio.h>
int main()
{
int num,d,copy,rev=0;
printf("\n Enter the number : ");
scanf("%d",&num);
copy=num;
while(num>0)
{
d=num%10;
num=num/10;
rev=(rev*10)+d;
}
if(copy==rev)
printf("\n %d is a palindrome number",copy);
else
printf("\n %d is not a palindrome number",copy);
return 0;
}

