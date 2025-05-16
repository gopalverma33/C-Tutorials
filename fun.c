#include<stdio.h>

void factorial(int *fact);

int main () {
    void factorial();
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    return 0;
}
void factorial(int *fact){
    int n;
    int *fact =1;
    for(int i=1; i<=n;i++){
        *fact = *fact*i;
    }
    printf("factorial of number %d: ",fact);
}
