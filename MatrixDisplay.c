#include <stdio.h>

void Matrix(int row, int column);
void Display(int arr[], int row, int column);

int main() {
    int r,c; 
    printf("Enter the number of rows:");
    scanf("%d", &r);
    printf("Enter the number of columns:");
    scanf("%d", &c); 
    Display(Matrix(r, c), r, c);
    printf("\nThank You\n");
    return 0;
}

int Matrix(int row, int column) {
    int arr[row][column];
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) {
            printf("Enter the value at %d row, %d column:", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    return arr;
}

void Display(int arr[], int row, int column) {
    printf("The Matrix is as follows:\n");
    for(int i = 0; i < row;i ++) {
        for(int j = 0; j < column; j++) {
            printf("\t%d",arr[i][j]);
        }
        printf("\n\n");
    }
}

