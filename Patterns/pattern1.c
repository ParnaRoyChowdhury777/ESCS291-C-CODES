#include<stdio.h>
int main()
{
int rows,i,j;
printf("Enter the number of rows : \n");
scanf("%d",&rows);
printf("\n");
for(i=1;i<=rows;i++)
{
for(j=1;j<=i;j++)
{
printf("%d ",j);
}
printf("\n");
}
return 0;
}
