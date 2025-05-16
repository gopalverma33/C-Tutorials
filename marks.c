#include<stdio.h>

int main () {
    int marks;
    printf("enter marks \n");
    scanf("%d",&marks);
    if(marks>=30 && marks <100){
        printf("pass");
    } else  if (marks<30 && marks>0){
        printf("fail");
    } else {
        printf("wrong marks");
    }
return 0;
}