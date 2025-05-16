#include<stdio.h>

int main (){
    /*int age = 22;
    int *ptr = &age;
    printf("%u\n",&age);
    printf("%f",ptr);
    printf("%f",&ptr);
   
    return 0;

   /* int *ptr;
    int x;
    ptr = &x;

    *ptr = 0;
    printf("x = %d\n",x);
    printf("ptr = %d\n",*ptr);*/

  /*  *ptr +=5;
    printf("x = %d\n",x);
    printf("ptr = %d\n",*ptr);*/

   /* (*ptr)++;
    printf("x = %d\n",x);
    printf("ptr = %d\n",*ptr);*/

   /* float price = 100.000;
    float *ptr = &price;
    float **pptr = &ptr;

    printf("%f\n",&ptr);
    printf("%f\n",ptr);
    printf("%f\n",price);
    */
   int i =5;
   int *ptr = &i;
   int **pptr = &ptr;

   printf("%d",**(pptr));
    return 0;
}