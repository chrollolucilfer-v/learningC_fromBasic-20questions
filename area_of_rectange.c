#include <stdio.h>
int main(){

    // program to find the area of rectange
    int length, breadth, area;
    printf("Enter the length of the rectange: ");
    scanf("%d", &length);

    printf("Enter the Breadth of the rectange: ");
    scanf("%d", &breadth);

    area = length * breadth;
    printf("Area of your rectange is %d", area);




    return 0;
}