#include<stdio.h>

int main(){
    int i,size,a[20],b[20];
    printf("Enter the size of arry element \n");
    scanf("%d",&size);
    printf("Enter the element in array\n");
    for(int i=0; i<=size; i++){
        scanf("%d",&a[i]);
    }
    for(int i=0; i<=size; i++){
        b[i]=a[i];
    }
    printf("\nElements of second array\n");
    for(int i=0; i<=size; i++){
        printf("\nValue inside the array b[%d] = %d\n",i,b[i]);
    }
}