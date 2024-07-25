#include <stdio.h>
int main() {
  int r, c, i, j;
  int a[10][10], b[10][10], sum[10][10];
  printf("\nEnter the number of rows (between 1 and 10): ");
  scanf("%d", &r);
  printf("\nEnter the number of columns (between 1 and 10): ");
  scanf("%d", &c);
//Input elements of 1st matrix
  printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }
//Input elements of 2nd matrix
  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element b%d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }
//Addition of the 2 matrices
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }
//Displaying the sum of the matrices
  printf("\nSum of two matrices: \n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("%d\t", sum[i][j]);
      if (j == c - 1) {
        printf("\n\n");
      }
    }
  return 0;
}