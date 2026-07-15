#include <stdio.h>

int main(){

    // checking whether a number is a prime number or not

    int num, i, prime = 1;

    printf("Enter your number");
    scanf("%d",&num);

    if( num <= 1){
        printf("Not a Prime");
    }
else{
      for(i=2; i< num; i++){
        if(num % i ==0){
            prime = 0;
            break;

        }
    }
    if(prime ==1){
        printf("Prime");
    }
    else 
    printf("not a prime")
        
    }
}

    return 0;
