#include<stdio.h>

int reverse(int x); 

int main () {
    int x,i;
scanf("%d",&x);
    reverse(x);
    return 0 ; 
}
int reverse(int x){
for(int i = x; i >= 1 ; i--){
    printf("%d\n",i);
}
}