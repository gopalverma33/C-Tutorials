#include<stdio.h>
#include<stdlib.h>
//Allocate memory for 5 numbers. Then dynamically increase it to 8 numbers.
int main (){
int *ptr ;
ptr = (int*)calloc(5,sizeof(int));
printf("Enter the elements (5) : ");
for(int i = 0 ; i<5; i++){
    scanf("%d",&ptr[i]);
    }
ptr = realloc(ptr,8 );
printf("Enter the elements (8) : ");
for (int i = 0 ; i<8 ; i++){
    scanf("%d\n",&ptr[i]);
}
for (int i = 0 ; i<8 ; i++){
printf("num : %d is %d\n", i,ptr[i]);
}
return 0 ;
}