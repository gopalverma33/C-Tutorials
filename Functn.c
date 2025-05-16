#include<stdio.h>

void namaste();
void bonjour();

int Main() {   
printf("enter i for indian and b for bonjour\n");
char ch;
scanf("%c",&ch);

if(ch == 'i'){
namaste();
} else {
    bonjour();
}
return 0;
}
void namaste (){
    printf("Namaste");
}
void bonjour (){
    printf("bonjour");
}