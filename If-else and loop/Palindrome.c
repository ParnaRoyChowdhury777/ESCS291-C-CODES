#include<stdio.h>
#include<math.h>

long reverse(long x){
    long temp=x;
    int d;
    long rev1=0;
    if(x<0)
    x=x*(-1);
    while(x>0)
    {
        d=x%10;
        x=x/10;
        rev1=(rev1*10)+d;
    }
    if(temp<0)
    rev1=rev1*(-1);
    if(rev1<-pow(2,31) || rev1>(pow(2,31)-1))
    return 0;
    return rev1;
}

int main()
{
long num,rev;
printf("\n Enter the number : ");
scanf("%d",&num);

rev=reverse(num);

if(rev==0)
printf("Reversing the number causes the value to go outside the signed 32-bit integer range [-231, 231 - 1]");

if(num==rev)
printf("\n %d is a palindrome number",num);
else
printf("\n %d is not a palindrome number",num);

return 0;
}

