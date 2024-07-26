#include <stdio.h>

int main() {
    int a, b, c, ch;
    printf("Enter vaulue of a:");
    scanf("%d", &a);
    printf("Enter vaulue of b:");
    scanf("%d", &b);
    printf("1)Additon\n2)Substraction\n3)Multiplication\n4)Division\n");
    printf("Enter your choice:");
    scanf("%d", &ch);
    switch(ch) {
        case 1: //Addition
            c = a+b;
            printf("The sum is %d", c);
            break;
        case 2: //Substraction
            c = a-b;
            printf("The difference is %d", c);
            break;
        case 3: //Multiplication
            c = a*b;
            printf("The product is %d", c);
            break;
        case 4: //Division
            c = a/b;
            printf("The quotient is %d", c);
            break;
        default:
            printf("Invaild choice");
            break;
    }
    return 0;
}