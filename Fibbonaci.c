#include <stdio.h>

int main() {

    int a = 0;
    int b = 1;
    int n;
    printf("Enter the number of members of fibbonaci series:");
    scanf("%d", &n);
    printf("%d \n", a);
    printf("%d \n", b);
    for( int i = 0; i <= n-2; i ++) {
        int c = a+b;
        printf("%d \n", c);
        a = b;
        b = c;
    }
}

