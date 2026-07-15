#include <stdio.h>
int main(){

// this is a program to reverse a array

    int n;

    printf("Enter the size of an array");
    scanf("%d", &n);

    int arr[n];

    printf("Enter Elements: ");
    for(int i = 0; i<=n; i++)
        scanf("%d", &arr[i]);  // taking in aelements of array

        // reversing arry
        for(int i =0; i< n/2; i++){
            int temp = arr[i];
            arr[i] = arr[n -1 - i];
            arr[n -1 -i] = temp;
        }
        // here we are reversing  an array by 
        // assigning a temporary value to the array and exchaing it with 
        // the last or so
        // effectively swapping first and last using temp
        // and stopping at n/2 as the middle part stays where it is and dosen't change
        // as for n-1 it's clear but for n-1-i as for ever loop we have to close in on array
        



        // printing the reversed array
        printf("Reversed array");
        

        for ( int i = 0; i< n; i++){
            printf("%d", arr[i]);
        }


    return 0;
}