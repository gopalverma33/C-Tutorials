#include<stdio.h>
#include<string.h>
//standard library function.
//concatenates first string with second string.
//concatenates(meaning) = add to strings.
int main (){
char firstStr[100] = "Hello";
char secondStr[] = "World";
strcat(firstStr,secondStr);
puts(firstStr);
return 0;
}
