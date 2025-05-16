#include<stdio.h>

void square(int *n);

int main () {
int number = 4;
square(&number);
printf("number is = %d",number);
return 0;
}

void square(int *n){
    *n = (*n) * (*n);
    printf("sqare is = %d",*n);
    }