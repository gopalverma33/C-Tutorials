#include<stdio.h>
//create a string firstname and last to store details of user and print all the characters using a loop.
void printstring(char arr[]);

int main () {
char firstname[] ="GOPAL";
char secondname[] = "VERMA";
printstring(firstname);
printstring(secondname);
}
void printstring(char arr[]){
for(int i= 0 ; arr[i] != '\0'; i++){
    printf("%c",arr[i]);
}
printf("\n");
}