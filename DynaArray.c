#include<stdio.h>
#include<stdlib.h>
//Create an array of size 5(using calloc) & enter its values from the user
int maint (){
int *ptr;
ptr = (int*)calloc(5,sizeof(int));
printf("Enter the element(5) : ");
for(int i = 0; i < 5 ; i++){
    scanf("%d",ptr[i]);
}
for(int i = 0 ; i < 5; i++){
    
}

}