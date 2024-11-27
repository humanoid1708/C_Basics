#include <stdio.h>

void Display(int arr[], int len) {
    for(int i = 0; i < len-1; i++){
        printf("%d, ", arr[i] );
    }
    printf("\n");
}

void BubbleSort(int arr[], int len) {
    for(int i = 0; i < len; i++) {
        for(int j = 0; j < len; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        Display(arr, len);
    }
    printf("Final: \n");
    Display(arr, len);
}

int main() {
    int list[] = {3,4,6,2,1,7,8};
    int len = sizeof(list)/sizeof(list[0]);
    BubbleSort(list, len);
    return 0;
}
