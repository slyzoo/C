#include <stdio.h>
#include <math.h>

int main (){

    const double PI = 3.14159;
    double radius;
    double circumference;

    printf("\nEnter the radius : ");

    scanf("%lf", &radius);

//      C = 2πr

    circumference = 2 * PI * radius;

    printf("\nthe circumference is %lf", circumference);

return 0;
}