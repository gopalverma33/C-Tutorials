#include<stdio.h>

void sumarray(int a[2],int *sum);

int main () {
int a[2];
int sum,i ;
    printf("enter the first element\n");
    scanf("%d",&a[0]);
    printf("enter the second element\n");
    scanf("%d",&a[1]);
    sumarray(a[0],a[1],&sum);
    printf("sum of the number is %d",sum);
    return 0;
}

void sumarray(int a[2] ,int *sum ){
    *sum = a[0] + a[1];
    printf("sum is %d",*sum) ;
}