#include <stdio.h>
int fact(int n);

int main() {
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    printf("The factorial is %d \n", fact(num));
    return 0;
}

int fact(int n) {
  if (n == 1) {
    return 1;
}
 
  int factnm1 = fact(n-1);
  int factn = factnm1 * n;
  return factn;
}