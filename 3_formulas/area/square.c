#include <stdio.h>
#include <math.h>

int main(){

    double length;
    double area;

    printf("\nEnter the width or length? : ");
    scanf("%lf", &length);

// area = length * width || length^2
    area = pow(length, 2);

    printf("the result is %0.2lf", area);

return 0;
}