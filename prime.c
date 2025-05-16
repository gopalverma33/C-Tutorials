#include<stdio.h>

int main () {
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    if(n%2==1){
        printf("given number is prime number");
        }else{
            printf("not prime number");
    }
return 0;
}