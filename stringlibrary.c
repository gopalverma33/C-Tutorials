#include<stdio.h>
#include<string.h>

//stdard library function.
void printString(char arr[]);
int countLength(char arr[]);

int main (){
char name []= "gopal";
int length = strlen(name);
printf(" Length is %d",length);
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