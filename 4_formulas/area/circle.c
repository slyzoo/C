#include <stdio.h>

int main(){

    const double pi = 3.14;
    double radius;
    double result; // Area

    printf("Enter the radius : ");
    scanf("%lf", &radius);

// Area = π * radius²
    result = pi * pow(radius, 2);
    printf("The area is : %0.2lf", result);

return 0;
}