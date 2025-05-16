#include<stdio.h>
#include<string.h>

struct student {
    char name [100];
    int roll;
    float cgpa;
};
int main () {
struct student IT[100];
IT[0].roll = 1664;
IT[0].cgpa = 9.2;
strcpy(IT[0].name,"gopal verma");

printf("student name = %s\n",IT[0].name);
printf("student roll = %d\n",IT[0].roll);
printf("student cgpa = %f\n",IT[0].cgpa);

return 0;
}