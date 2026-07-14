#include <stdio.h>

int main() {
    int a, b, c;

    printf("enter all three numbers you want to compare:- \n");
    scanf(" %d %d %d", &a, &b, &c);

    if (a>=b && a>= c)
    {
        printf("The Largest number is %d", a);
    }
    else if( b>=a && b>= c){
        printf("The Largest number is %d", b); 
    }
    else{
    printf("The Largest Number is %d", c);
    }
    
    
    return 0;
}