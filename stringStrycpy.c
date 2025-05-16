#include<stdio.h>
#include<string.h>

//libarary function.

int main () {
    char oldStr[]="oldStr";
    char newStr[] = "newStr";
    strcpy(newStr, oldStr);
    puts(newStr);
    return 0;
}