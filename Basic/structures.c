# include<stdio.h>
# include <string.h>

// user defined
struct student {
        char name[100];
        int roll;
        float cgpa;
    }

int main(){ 

    // Structures
    // a collectio nof values of different data types
    

    struct student s1;
    s1.roll = 14;
    strcpy(s1.name, "Bhaskar");
    s1.cgpa = 9.5;
// now printing all of them
printf("student name = %s", s1.name);
printf("\nstudent roll = %d", s1.roll);
printf("\nstudent cgpa = %.2f", s1.cgpa);


return 0;
}