#include <stdio.h>

int main(){
    float a,b;
    char op;

    printf("Enter the first Number:- ");
    scanf("%f",&a);

    printf("Enter the Operator Betweem ( +, - , *, /):- ");
    scanf(" %c",&op);

    printf("Enter the Second Number:- ");
    scanf("%f",&b);

    switch(op){
        case '+':
        printf("Result:- %f", a+b);
        break;
        case '-':
        printf("Result:- %f", a-b);
        break;
        case '*':
        printf("Result:- %f", a*b);
        break;
        case '/':
        printf("Result:- %.2f", a/b);
        break;

        default:
        printf("Enter a valid operator");
    }

    return 0;

}