#include<stdio.h>

int main() {
    //Taking multiword string input.
    char string[10];
    printf("Enter a multiword string (fgets):");
    //fgets(strname, length, file).
    fgets(string, 50, stdin); 
    puts(string);
    return 0;
}