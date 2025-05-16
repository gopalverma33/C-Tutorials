#include<stdio.h>

int main () {
    FILE *fptr;
    fptr = fopen("Text.txt","w");
    //printf("%c\n",fgetc(fptr));
    //printf("%c\n",fgetc(fptr));
    //printf("%c\n",fgetc(fptr));
    //printf("%c\n",fgetc(fptr));
    //printf("%c\n",fgetc(fptr));

    fputc('m',fptr);
    fputc('a',fptr);
    fputc('n',fptr);
    fputc('g',fptr);
    fputc('o',fptr);

    fclose(fptr);
    return 0 ;
}
