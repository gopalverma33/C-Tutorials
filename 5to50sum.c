#include<stdio.h>

int main () {
    int n;
    int sum = 0;
    for(int i = 5; i<=50; i++){
        sum = sum + i;
    }
    printf("%d\n",sum);
   return 0;
}