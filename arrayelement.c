#include<stdio.h>
int main (){
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element in array\n");
    for(int i=0; i<n; i++){
    scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++){
        printf("arry element of a[%d] = %d\n",i,a[i]);
    }
}