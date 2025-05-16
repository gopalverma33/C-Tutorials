#include<stdio.h>

int calcPercentage(int sc,int math,int sanskrit);

int main () {
    int sc = 98;
    int sanskrit = 89;
    int math = 95;
printf("percentage is %d",calcPercentage(sc,math,sanskrit));
}
int calcPercentage(int sc,int math,int sanskrit){
    return((sanskrit+sc + math)/3);
}
