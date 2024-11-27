#include <stdio.h>

void Display(int arr[], int len) {
    for(int i = 0; i < len; i++){
        printf("%d, ", arr[i] );
    }
    printf("\n");
}

void InsertionSort(int arr[], int len) {
    for(int i = 0; i < len; i++){
        int key = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    Display(arr, len);
}

int main() {
    int list[] = {3,4,6,2,1,7,8};
    int len = sizeof(list)/sizeof(list[0]);
    InsertionSort(list, len);
    return 0;
}