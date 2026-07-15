#include <stdio.h>
int main(){
    int n, key, found = 0;

    printf("Enter Size of Your Array:- ");
    scanf("%d",&n);


    int arr[n];
    printf("Enter your Elements:- ");
    for( int i =0; i< n; i++){
        scanf("%d",&arr[i]);

    }

    printf("Enter Element to Find: ");
    scanf("%d", &key);

    for ( int i =0;i<n;  i++){
        if( arr[i] == key){
            printf("Your Element found it s %d", arr[i]);
            found =1;
            break;
        }
    }

    if(!found){
        printf("Element not found");
    }


    return 0;
}

// fucking did it( was simple than it looks)