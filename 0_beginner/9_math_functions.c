#include <stdio.h>
// MATH
#include <math.h>

int main(){

// square root
    double A = sqrt(9);
    printf("%lf", A);

// 9^12
    double B = pow(9, 12);
    printf("%lf", B);

// rounding
    int C = round(1.32);
    printf("%d", C);

// ceiling
    int D = ceil(15.53);
    printf("%d", D);

// floor
    int E = floor(3.14);
    printf("%d", E);

// absolute value
    double F = fabs(-123); // why is it called "fabs"?
    printf("%lf", F);

// logarithms
    double G = log(3);
    printf("%lf", G);
// 
    double H = sin(45);
    printf("%lf", H);

// 
    double I = cos(45);
    printf("%lf", I);

// 
    double J = tan(45);
    printf("%lf", J);

return 0;
}