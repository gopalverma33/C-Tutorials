#include<stdio.h>
#include<stdlib.h>

int main (){
    int *ptr;
    int  n1,n2,sum = 0 ;
    printf("Enter the elements \n");
    scanf("%d",&n1);
    ptr = (int*)malloc(n1*sizeof(int));
    for(int i=0; i<n1;i++){
        scanf("%d",ptr +i);
        sum += *(ptr+i);
    printf("%d\n",sum);
    
    }
    printf("Rellocation of element\n");
    scanf("%d",&n2);
    ptr = realloc(ptr,n2*sizeof(int));
    for( int i =0 ; i<n2; i++){
        scanf("%d",ptr +i);
        sum += *(ptr +i );
        printf("%d",sum);
    }
return 0 ;
}