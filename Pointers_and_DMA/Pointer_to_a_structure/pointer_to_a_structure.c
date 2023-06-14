//Use of pointer to a structure

#include<stdio.h>

struct point
{
    float x,y;
};

int main()
{
    struct point fpoint,mpoint,spoint,*pf,*pm,*ps;
    pf=&fpoint;
    pm=&mpoint;
    ps=&spoint;

    printf("Enter x-coordinate of first point : \n");
    scanf("%f",&pf->x);
    printf("Enter y-coordinate of first point : \n");
    scanf("%f",&pf->y);
    printf("Enter x-coordinate of second point : \n");
    scanf("%f",&ps->x);
    printf("Enter y-coordinate of second point : \n");
    scanf("%f",&ps->y);

    pm->x=(pf->x+ps->x)/2.0;
    pm->y=(pf->y+ps->y)/2.0;

    printf("Middle point x=%0.1f and y=%0.1f \n",pm->x,pm->y);
    
    return 0;
    
}