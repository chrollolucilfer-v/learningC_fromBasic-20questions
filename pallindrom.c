#include<stdio.h>
int main(){
// progrma to check whether a number is a pllindrom or not

// pallindrom is a number which reads the same forward and backwards

int num, reverse =0, remainder;

printf("Enter a number");
scanf("%d",&num);
int original = num;

while(num !=0){
    remainder = num % 10;
    reverse = reverse * 10 + remainder;
    num = num /10;
}

if(original == reverse){
    printf("congratulation your number is a pallindrome");
}
else{
    printf("not a pallindrome");
}

return 0;

}