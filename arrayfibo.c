#include<stdio.h>
//Write a program to print fibbonacci series using array.
int main () {
    int n;
    printf("enter n n>2\n");
    scanf("%d",&n);
    int fib[n];
    fib[0] = 0;
    fib[1] =1;
    for( int i = 2; i<n; i++  ){
        fib[i] = fib[i-1] + fib[i-2];
        printf("%d\t",fib[i]);
    }
}