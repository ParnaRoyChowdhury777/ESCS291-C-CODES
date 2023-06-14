#include<stdio.h>
int main()
{
int a[100][100],transpose[100][100],i,j,r,c;
printf("Enter the number of rows of the matrix : \n");
scanf("%d",&r);
printf("Enter the number of columns of the matrix : \n");
scanf("%d",&c);

printf("Enter elements in the matrix : \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("Enter element [%d][%d] : \n",i,j);
scanf("%d",&a[i][j]);
}
}

for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
transpose[j][i]=a[i][j];
}
}

printf("The original matrix is : \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
printf("%3d ",a[i][j]);
printf("\n");
}

printf("The transpose matrix is : \n");
for(i=0;i<c;i++)
{
for(j=0;j<r;j++)
printf("%3d ",transpose[i][j]);
printf("\n");
}

return 0;
}



