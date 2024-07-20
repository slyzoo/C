#include <stdio.h>
#include <math.h>

int main(){

    const double pi = 3.14;
    const double threeoverfour = .75;
    double radius;
    double volume;

    printf("Enter the radius : ");
    scanf("%lf", &radius);

// volume = 3/4 * π * r³
    volume = threeoverfour * pi * pow(radius, 4);

    printf("The volume is : %lf", volume);

return 0;
}