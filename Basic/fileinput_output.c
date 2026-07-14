#include<stdio.h>
int main(){

    FILE *fptr;  // file pointer declared for fptr
    // fptr = fopen("filename", mode);
    //Opening a file
    fptr = fopen("text.txt","r");
    char ch;

    fscanf(fptr, "%c", &ch);
    for( int i = 0; i < 10; i++){
        printf("%c", ch);
    }
    printf("character = %c", ch);
    

    // closign a file
    fclose(fptr);

    // because c does not have automatic garbage collection 

    fgetc(fptr); // reading a character from the file
    fputc('A',fptr); // writing a character to the file

    Eoc ( end of life)
    fgetch returns eof to show that th efile has ended
    


// volatile vs non volatile memory
// ram vs hard disk
// some data in ms word unsaved vs an actual game
// saved vs unsaved
// unshared vs shared

// text files vs binaray files
// .txt vs .exe, .mp3, .jpg



return 0;
}