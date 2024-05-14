#include <stdio.h>
#include <math.h>

int main (){

    double side_A;
    double side_B;
    double side_C;


    printf("\nEnter side A : ");

    scanf("%lf", &side_A);

    printf("\nEnter side B : ");

    scanf("%lf", &side_B);

//      C = √A² + B²

side_C = sqrt(pow(side_A, 2) + pow(side_B, 2));

    printf("\nside C : %lf", side_C);

return 0;
}