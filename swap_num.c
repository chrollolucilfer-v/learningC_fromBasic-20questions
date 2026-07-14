#include <stdio.h>
int main(){

    // Program to swap two numbers usign a third variable
    int a,b, temp;
    printf("Enter Your First Number:- \n");
    scanf("%d", &a);
    printf("Enter Your Second Number:-  \n"); 
    scanf("%d", &b);

    temp = a;
    a = b;
    b= temp;

    // after the swap
    printf("Afeter the swap a is %d and b is %d", a,b);


    return 0;
}