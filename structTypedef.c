#include<stdio.h>
#include<string.h>
//typedef keyword.
typedef struct computerengineeringstudent {
    char name[100];
    int roll;
    float cgpa;
} coe;

int main (){
coe s1;
strcpy(s1.name,"gopal verma");
s1.roll = 1664;
s1.cgpa = 9.2;

printf("student name = %s\n",s1.name);
printf("student roll = %d\n",s1.roll);
printf("student cgpa = %f",s1.cgpa);
return 0 ;
}
