#include<stdio.h>
//Write a program to write all the odd numbers from 1 to n in a file.
int main () {
FILE *fptr;
fptr = fopen("Text.txt","w");
int n;
printf("ENTER THE NUMBER : ");
scanf("%d",&n);
for(int i=0 ; i<n; i++){
    if(i%2 != 0){
        printf("%d\n",i);
fprintf(fptr,"%d\n",i);
    }
}
fclose(fptr);
return 0 ;
}