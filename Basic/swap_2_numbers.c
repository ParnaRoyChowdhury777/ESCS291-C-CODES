#include<stdio.h>

int main()
{
    int a,b,temp;
    printf("Enter the first number : \n");
    scanf("%d",&a);
    printf("Enter the second number : \n");
    scanf("%d",&b);

    printf("Before swapping, first number is %d and second number is %d \n",a,b);

    temp=a;
    a=b;
    b=temp;

    printf("After swapping, first number is %d and second number is %d \n",a,b);

    return 0;
}