#include<stdio.h>

int main (){
    for (int i =5;i<=50;i++){
        if(i%2 !=1){
            continue ;
        }
        printf("%d\n",i);
    }
    return 0;
}