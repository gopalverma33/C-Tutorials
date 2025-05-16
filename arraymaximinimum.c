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
    int maxNo = a[0] ;
    int minNo = a[0] ;
    for(int i=0; i<n; i++){
        if(maxNo<a[i]){
            maxNo = a[i];
        }
        if(minNo>a[i]){
            minNo = a[i];
        }    
        }
        printf("%d is maximum element\n",maxNo);
        printf("%d is minimum element\n",minNo);
    return 0;
}