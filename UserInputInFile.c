#include <stdio.h>

int main() {
    //Declaring file pointer
    FILE *fptr;
    fptr = fopen("info.txt", "w");

    //User Input
    char name[100];
    printf("Enter the name:");
    scanf("%s", name);
    int age;
    printf("Enter the age:");
    scanf("%d", &age);
    float cgpa;
    printf("Enter the cgpa:");
    scanf("%f", &cgpa);

    //Saving input to file
    fprintf(fptr, "%s\t%d\t%f", name, age, cgpa);
    fclose(fptr);

    return 0;
}