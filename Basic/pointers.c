# include<stdio.h>



int main(){

    // pointer is a variable that stores the address of another variable

    int age = 21;

    int *ptr = &age; //a pointer named ptr storing a address age * pinter, & address

    int _age = *ptr; // a varaible _a which stores the value at the pointer's value

    // to print pointer and related
    // format specifier

    printf("%p", &age);
    printf("\n%p", ptr);
    printf("\n%p", &ptr);


    // Pointer to pointer is when a pointer points to the address of another pointer
    int **ptr;
    char **ptrr;
    float **ptrrr;


    // Arrays is a collection of similar data types stored in 
    // contiguous memory locations. 
    // The name of the array is a pointer to the first element of the array.


    // Strings
    // a character array terminated by a null characer '\0'
    // denoting string termination

    // eg:-
    char name[] = { 'B', 'H', 'A', 'R', 'A', 'T', '\0' }; // a string
    char class[] = "Bhaskar"

}










    return 0;
}