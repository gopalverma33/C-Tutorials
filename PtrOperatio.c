#include<stdio.h>

int main (){
    int add,multi,division,subs;
    int a = 5,b = 2;   
    int *p1=&a;
    int *p2=&b;
    add = *p1 +*p2;
    subs = *p1 -*p2;
    multi = *p1 **p2;
    division = (*p1) /(*p2);
    printf("sum = %d\nubs = %d\nmulti = %d\ndivision = %d",add,subs,multi,division);
    return 0;
}