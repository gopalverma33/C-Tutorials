#include<stdio.h>
#include<string.h>

struct person{
 int age ;
 float weight ;
};
int main (){
struct person p1;
struct person *ptr =&p1;
printf("enter age\n");
scanf("%d",&ptr->age);
printf("enter weight\n");
scanf("%f",&ptr->weight);
printf("displaying\n");
printf("%d ,%f",ptr->age,ptr->weight);
return 0 ;
}