#include<stdio.h>

//Ask the user to enter their firstname and print it back tpo them.

// Also try with their full name.

//gets(); = input
//puts(); = output


/*int main (){
    char name [50];
    scanf("%s",name);
    printf("your name is : %s", name);
    return 0;
}*/
/*int main () {
char str[100];
gets(str);
puts(str);
puts(str);
return 0;
}*/

int main () {
char str[100];
fgets(str,100,stdin);
puts(str);
return 0;
}

