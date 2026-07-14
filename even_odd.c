#include <stdio.h>
int main(){

    // program to check wheter a number is even or odd
    int num;
    printf("Enter your Number");
    scanf("%d", &num);
    if(num%2==0){
        printf("The Number You have entered is Even");

    }else{
        printf("Odd");
    }


    // no need for {curly braces if only one line}
    // if ( num % 2 ==0 )
    //     printf("even")
    // else
    //     printf("odd")


    return 0;
}