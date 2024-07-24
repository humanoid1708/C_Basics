#include <stdio.h>

int main() {
    FILE *sptr, *dptr;
    char ch;
    sptr = fopen("source.txt", "r");
    dptr = fopen("destination.txt", "w");

    //fgetc returns End Of File character after all the data is read from the file
    while ((ch = fgetc(sptr)) != EOF) {
        fputc(ch, dptr);
    }
    printf("File copied successfully!\n");
    fclose(sptr);
    fclose(dptr);
    return 0;
}