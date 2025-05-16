#include<stdio.h>

int main () {
    int number;
    printf("enter a numer");
    scanf("%d",&number);
    if(number>=1 ){
        printf("it is natural number\n");
    } else if (number<=0) {
        printf("number is not natural number\n");
    }
    return 0;
}