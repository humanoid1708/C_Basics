#include <stdio.h>

int count(int arr[], int n);

int main() {
    int num[] = {0,1,2,3,4,5,6,7,8,9};
    int a = 10;
    printf("Odd numbers in the array are %d", count(num, a));
    return 0;
}

int count(int arr[], int n) {
    int c = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i]%2 != 0) {
            c = c + 1;
        }
    }
    return c;
}