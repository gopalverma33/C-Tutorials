#include<stdio.h>

int main () {
    int number;
printf("enter the element\n");
scanf("%d",&number);
int n3;
int n1=0;
int n2=1;
for(int i=2; i<=number;i++){
    n3 =  (i-1)+ (i-2);
 printf("%d\t",n3);
}
return 0;
}