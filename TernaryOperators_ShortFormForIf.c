#include<stdio.h>

int main() {
    /* Syntax is:
        Condtion '?' execute if True ':' execute if False*/
    
    4 != 3 ? printf("Yes") : printf("No");

    // OR

    if(4 != 3) {
        printf("\nYes");
    }
    else {
        printf("\nNo");
    }
}