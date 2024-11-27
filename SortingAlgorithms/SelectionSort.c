#include <stdio.h>

void Display(int arr[], int len) {
    for(int i = 0; i < len; i++){
        printf("%d, ", arr[i] );
    }
    printf("\n");
}

void SelectionSort(int arr[], int len) {
    for(int i = 0; i < len; i++){
        int min = i;
        for(int j = i+1; j < len; j++){
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    Display(arr, len);
}

int main() {
    int list[] = {3,4,6,2,1,7,8};
    int len = sizeof(list)/sizeof(list[0]);
    SelectionSort(list, len);
    return 0;
}