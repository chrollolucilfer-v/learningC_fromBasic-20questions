#include<stdio.h>



// program to find greactest common dividor and leact common multiple

// dividing two numbers dividing number and allso beign the largest


int main(){

    int a, b, x, y, gcd, lcm;

    printf("Enter Two Number");
    scanf("%d %d", &a , &b);

    x= a;
    y=b;

    while( y!= 0){
        int temp = y;
        y = x%y;
        x = temp;

    }

    gcd  = x;
    lcm = (a*b) / gcd;

    printf("GCD = %d \n", gcd);
    printf("LCM = %d", lcm);
    



    return 0;
}