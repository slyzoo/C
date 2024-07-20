#include <stdio.h>

int main(){

    double base;
    double height;
    double area;

    printf("Enter the base length? : ");
    scanf("%lf", &base);

    printf("Enter the height? : ");
    scanf("%lf", &height);

// A = h * b / 2
    area = height * base / 2;

    printf("the result is : %0.2lf", area);

return 0;
}