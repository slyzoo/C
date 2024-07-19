#include <stdio.h>

int main(){

    const double pi = 3.14;
    double radius;
    double circumference;

printf("Enter the Radius : ");
scanf("%lf", &radius);

// C = 2 * π * r
circumference = 2 * pi * radius;

printf("The Circumference is : %lf", circumference);


return 0;
}