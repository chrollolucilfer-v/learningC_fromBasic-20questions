#include<stdio.h>
int main(){

    // program to check a armstrong number
    // what is a armstrong number
    // a number which satisfies
    // that the cube of three digits are exactly the 3 digits whose cuce is taken 

    // 1^3 + 5^3 + 3^3 = 153 

    int num, original, remainder;
    int sum = 0;

    printf("Enter a 3 digit Number ");
    scanf("%d", &num);

    original = num;

    while(num != 0){
        remainder = num % 10;
        sum = sum + remainder * remainder * remainder;
        num = num /10;
    }

    if(sum == original)
        printf("Armstrong Number");
    else
        printf("Not Armstrong");

    return 0;
    
}