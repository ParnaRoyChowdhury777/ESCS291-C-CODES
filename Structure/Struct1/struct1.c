#include<stdio.h>
struct student
{
char course[20];
long roll;
char subcode1[10],subcode2[10],subcode3[10];
float marks1,marks2,marks3;
};

int main()
{
float avg;
struct student st;
printf("Enter the course name: \n");
scanf("%s",st.course);
printf("Enter the roll number: \n");
scanf("%ld",&st.roll);
printf("Enter the three subject codes: \n");
scanf("%s %s %s",st.subcode1,st.subcode2,st.subcode3);
printf("Enter the three subject marks: \n");
scanf("%f %f %f",&st.marks1,&st.marks2,&st.marks3);
avg=(st.marks1+st.marks2+st.marks3)/3.0;
printf("The details of the student are as follows :\n");
printf("The course name is %s\n",st.course);
printf("The roll number is %ld\n",st.roll);
printf("The three subject codes are %s, %s and %s\n",st.subcode1,st.subcode2,st.subcode3);
printf("The three subject marks are %f, %f and %f\n",st.marks1,st.marks2,st.marks3);
printf("The average marks is %f\n",avg);
return 0;
}

