#include<stdio.h>

int main(){

    int n;
    int sum = 0;

    printf("Enter the size of your array  :- ");
    scanf("%d",&n);

    int arr[n]; // declaring an array of n size

    printf("Enter the Elements of your array");
    for(int i=0; i<= n; i++){
        scanf("%d",&arr[i]);
    }

    int max = arr[0];
    int min = arr[0]; // taking two arrays to size0

    for(int i =0; i<n; i++){
        sum += arr[i];

        if (arr[i]> max)
            max = arr[i];

        if(arr[i]< min)
            min = arr[i];
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);
    printf("sum = %d \n", sum);
    printf("Average = %.2f", (float)sum/n);





    return 0;


}