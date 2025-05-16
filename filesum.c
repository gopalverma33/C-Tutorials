#include<stdio.h>
//Write a program to read the number from the file & sum the numbers.
int main () {
FILE *fptr;
fptr = fopen("Sum.txt","r");
int a ; 
int b;
fscanf(fptr,"%d",&a);
printf("%d",a);
fscanf(fptr,"%d",&b);
printf("%d",b);
fclose(fptr);

fptr = fopen("Sum.txt","w");

fprintf(fptr,"%d",a+b);
fclose(fptr);
return 0 ;
}