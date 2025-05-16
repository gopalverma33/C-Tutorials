#include<stdio.h>

/*int main ()   {
int  num,remain,result = 0;
printf("Enter three digit numbers\n");
scanf("%d",&num);
while (num > 0){
    remain = num%10 ;
    result += (remain* remain*remain);
    num /= 10 ;
    if(result == num){
        printf("Enter number is an armstrong number\n");
    } else {
        printf("Enterd number is not an armstorng number\n");
    }
}
return 0 ;

}*/
/*
void addnum(int *a,int* b,int *sum);

int main  (){
int a,b;
int sum;
    printf("enter the value\n");
    scanf("%d",&a);
    printf("enter the value\n");
    scanf("%d",&b);
    addnum(a,b,&sum);
    printf("sum = %d",sum);
    return 0 ;

}
void addnum(int *a,int *b,int *sum){
    *sum = 0;
    *sum = *a + *b;
}*/

/*int main () {
    int n,q,rem,result = 0;
    printf("Enter the pelindrom number\n");
    scanf("%d",&n);
    q = n;
    while(q!=0)
    {
        rem  = q%10;
        result =  result*10 + rem;
        q = q/10;
    }
    if(result == n)
    printf("Its a palindrome");
    else
    printf("No Its not pelindrom number");
    return 0 ;
    }*/
    /*int isPalindrome(int x,int q,int rem,int result );

    int  main (){
int x,q,rem,result;
printf("Enter the number \n");
scanf("%d",&x);
isPalindrome(&x,&q,q,result);
printf("%d",x);
    return 0 ;
}
int isPalindrome(int x,int q,int rem,int result){
    result = 0 ;
    x = q;
    while (q!=0){
        rem = q%10;
        result = result*10 + rem;
        q = q/10;
        
    }
    if(result = x)
    printf("Its a palindrome number");
    else
    printf("It is not palindrome number");
}*/
/*int main(){
int Aad;
int Bad;
int sum = 0;
scanf("%d %d",&Aad,&Bad);
sum = Aad+Bad;
printf("sum %d",sum);
}*/
int main (){
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;
    printf("%p\n",&age);
    printf("%p\n",&ptr);
    printf("%p\n",age);
    printf("%p\n",*ptr);
    printf("%p\n",*(&age));
}