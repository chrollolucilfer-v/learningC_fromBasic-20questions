#include <stdio.h>
int main(){
    //  Program to find the factorial of a number


    int n;
    int num =1;
    printf("Enter the number you want a factorial for:- \n");
    scanf("%d", &n);

    for( int i=1; i<= n; i++){
        num = num * i;
    }

    printf("Factorial of your number is:- %d", num);


    return 0;
}