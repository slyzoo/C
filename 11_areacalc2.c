#include <stdio.h>
#include <math.h>

int main (){

    const double PI = 3.14159;
    double radius;
    double area;

    printf("\nEnter the radius : ");

    scanf("%lf", &radius);

//      A = πr²

    area = PI * pow(radius, 2);

    printf("\nthe area is %lf", area);

return 0;
}