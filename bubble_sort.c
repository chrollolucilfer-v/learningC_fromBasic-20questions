''

    // compare adjacent elements and swap them if they are in wrong order
    // repeat till the array is sorted

#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

        // main part of the question which i completely don't get it but will try
        for( int i = 0; i< n; i++){
            for(int j = 0; i<n-1-i , j++){
                if(arr[j]> arr[j +1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
        // or something like that
        




    printf("Sorted Array:\n");

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}