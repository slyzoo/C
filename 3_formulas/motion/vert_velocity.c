#include <stdio.h>
#include <math.h>

int main(){

    double gravity = 9.81;
    double Vzero;
    double time;
    double Vone;

    printf("Enter the (V0) initial velocity : ");
    scanf("%lf", &Vzero);

    printf("Enter the (g) Gravity\n(earth is 9.81) : ");
    scanf("%lf", &gravity);

    printf("Enter the (t) time : ");
    scanf("%lf", &time);

// V₁ = V₀ - gt
    Vone = Vzero - (gravity * time);

    printf("Vertical Velocity is : %lf", Vone);

return 0;
}