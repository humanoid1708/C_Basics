#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, dis;
    float r1, r2;
    printf("Enter the coefficient of x square:");
    scanf("%f", &a);
    printf("Enter the coefficient of x:");
    scanf("%f", &b);
    printf("Enter the constant term:");
    scanf("%f", &c);
    dis = (pow(b, 2))-(4*a*c);
    if(dis < 0) {
        printf("The equation has imaginary roots");
    }

    else if(dis >= 0) {
        r1 = (-b + sqrt(dis))/(2*a);
        r2 = (-b - sqrt(dis))/(2*a);
        printf("Roots of the equation are %f and %f", r1, r2);
    }
    return 0;
}
