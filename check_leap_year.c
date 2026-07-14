#include <stdio.h>

int main() {
    int year;
    printf("Enter Your Year:- \n");
    scanf("%d", &year);

    if(year % 4==0 ){
        if(year % 100==0 && year % 400==0){
            printf("Leap Year");
        }else if(year % 100==0 && !(year % 400==0)){
            printf("Not a leap year");
        }
        else{
            printf("The Year is a Leap year");
        }
    }else {
        printf("Not a Valid year");
    }




    return 0;
}