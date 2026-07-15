#include<stdio.h>


// this is a program to solve fibonaci series for a nubmer

// 0 1 1 3 5 8


int main(){

    int n, a = 0, b =1, c;
    printf("Enter YOur Number: ");
    scanf("%d",&n);

    for( int i= 1; i<=n; i++){
        printf("%d", a);
        c = a + b;
        a = b;
        b = c;
    }

    

    return 0;
}