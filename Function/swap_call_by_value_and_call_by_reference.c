#include<stdio.h>
void swapByValue(int a, int b)
 {
    int temp = a;
    a = b;
    b = temp;
    printf("After swapping by value(in function): num1 = %d, num2 = %d\n", a, b);
}

void swapByReference(int *x, int *y) 
{
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("After swapping by reference(in function): num1 = %d, num2 = %d\n", *x, *y);
}

int main()
 {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    swapByValue(num1, num2);
    printf("After swapping by value(in main): num1 = %d, num2 = %d\n", num1, num2);

    swapByReference(&num1, &num2);
    printf("After swapping by reference(in main): num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
