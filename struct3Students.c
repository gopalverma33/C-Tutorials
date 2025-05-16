#include<stdio.h>
#include<string.h>
//Write a program to store data of three students.
struct student {
    char name [100];
    int roll;
    float cgpa;
};
int main () {
struct student s1;
s1.roll = 301366;
s1.cgpa = 9.2;
strcpy(s1.name,"sharddha khapra" );

printf("student name = %s\n",s1.name);
printf("student roll = %d\n",s1.roll);
printf("student cgpa = %f\n",s1.cgpa);

struct student s2;
s2.roll = 301367;
s2.cgpa = 8.5;
strcpy(s2.name,"ravi jawariya");

printf("student name = %s\n",s2.name);
printf("student roll = %d\n",s2.roll);
printf("student cgpa = %f\n",s2.cgpa);

struct student s3;
s3.roll = 301368;
s3.cgpa = 7.5;
strcpy(s3.name,"aastha jawariya");

printf("student name = %s\n",s3.name);
printf("student roll = %d\n",s3.roll);
printf("student cgpa = %f\n",s3.cgpa);

return 0;
}