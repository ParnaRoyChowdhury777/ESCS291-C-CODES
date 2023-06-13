#include<stdio.h>
typedef struct date
{
int day;
char month[15];
int year;
}Date;

void display(int a,char *b,int c)
{
 printf("%d %s,%d\n",a,b,c);
}

int main()
{
Date d1;
printf("Enter the day:\n");
scanf("%d",&d1.day);
printf("Enter the month:\n");
scanf("%s",d1.month);
printf("Enter the year:\n");
scanf("%d",&d1.year);
display(d1.day,d1.month,d1.year);
return 0;
}

