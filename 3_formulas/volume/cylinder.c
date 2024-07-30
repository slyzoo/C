#include <stdio.h>
#include <math.h>

int main(){

    const double pi = 3.14;
    double radius;
    double height;
    double volume;

    printf("Enter the radius : ");
    scanf("%lf", &radius);

    printf("Enter the hieght : ");
    scanf("%lf", &height);

// Volume = πr² * h
    volume = pi * pow(radius, 2) * height;

    printf("Volume is : %lf", volume);

return 0;
}