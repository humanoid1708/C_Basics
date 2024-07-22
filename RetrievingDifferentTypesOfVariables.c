#include <stdio.h>

int main()
{
    char *name;
    int age;
    float marks;
    printf("Enter the name:");
    scanf("%s", &name);
    printf("Enter the age:");
    scanf("%d", &age);
    printf("Enter the marks:");
    scanf("%f", &marks);    

    printf("The name is %c", name);
    printf("The name is %d", age);
    printf("The name is %f", marks);

}