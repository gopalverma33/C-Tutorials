#include<stdio.h>
//Write a program to enter price of 3 items & print their final cost with gst.
int main (){
    float price[3];
    printf("enter 3 price");
    scanf("%f ",&price[0]);
    scanf("%f",&price[1]);
    scanf("%f",&price[2]);
    printf("price 1 : %f\n",price[0] + (0.18 * price[0])); 
    printf("price 1 : %f\n",price[1] + (0.18 * price[1]));
    printf("price 1 : %f\n",price[2] + (0.18 * price[2]));
   return 0 ;
}