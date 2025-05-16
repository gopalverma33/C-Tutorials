#include<stdio.h>
#include<string.h>

typedef struct Bankaccount {
    int accountNo ;
    char name[100];
} acc;
int main (){
    acc acc1 = {123,"Gopal verma"};
    acc acc2 = {234,"rajat"};
    acc acc3 = {456,"sudhir"};

    printf("acc no = %d\n",acc1.accountNo);
    printf("name = %s",acc1.name);
    return 0 ;
}