#include<stdio.h>
#include<string.h>
// Arrow structure.
struct student {
    char name [100];
    int roll;
    float cgpa;
};
int main () {
struct student s1 = {"gopal verma",1664,9.2};

/*printf("student name = %s\n",s1.name);
printf("student roll = %d\n",s1.roll);
printf("student cgpa = %f\n",s1.cgpa);*/

struct student *ptr = &s1;
printf("student name = %s\n",(*ptr).name);

printf("student name = %s\n",ptr->name);
printf("student roll = %d\n",ptr->roll);
printf("student cgpa = %f\n",ptr->cgpa);

return 0;
}