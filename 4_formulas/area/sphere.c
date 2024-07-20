#include <stdio.h>
#include <math.h>

int main(){

    const double pi = 3.14;
    double radius;
    double area;

    printf("Enter the radius : ");
    scanf("%lf", &radius);

// area = 4πr²
    area = 4*pi*pow(radius,2);

    printf("the area is : %lf", area);

return 0;
}