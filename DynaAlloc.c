#include<stdio.h>
#include<stdlib.h>

int main (){
    int *ptr;
    int n,i,sum = 0;
    printf("enter elements\n");
    scanf("%d",&n);
    ptr = (int *)malloc(n * sizeof(int));
    if(ptr==NULL){
        printf("allocation is not possible\n");
        exit(0);
    }
    for( i=0 ; i<n ; ++i){
        scanf("%d",ptr+i);
        sum += *(ptr+i);
    }
        printf("%d\n",sum);
    
    return 0 ;
}