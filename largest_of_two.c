#include <stdio.h>
int main(){

    int x,y;
    printf("Enter Your First Number");
    scanf("%d", &x);
    printf("Enter Your Second Number");
    scanf("%d", &y);

    if(x>y)
    printf("x is largest among two");
    else if(y>x)
    printf("y is largest amongst the two");
    else
    printf("Both are equal");



    return 0;
}