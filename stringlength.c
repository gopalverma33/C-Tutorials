#include<stdio.h>

//MAKE A PROGRAM THAT INPUTS USER'S NAME & PRINTS ITS LENGTH.
void printString(char arr[]);
int countLength(char arr[]);

int main (){
char name [100];
fgets(name,100,stdin);
printf(" Length is %d",countLength(name));
return 0;
}
int countLength(char arr[]){
int count = 0 ;
for(int i=0; arr[i]!= '\0';i++){
    count++;
}
return count-1;
}
void printString(char arr[]){
for(int i =0 ; arr[i]!= '0'; i++){
    printf("%c",arr[i]);
}
printf("\n");
}

