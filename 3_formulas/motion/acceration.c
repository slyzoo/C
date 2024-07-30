#include <stdio.h>

int main(){

    double start_velocity;
    double final_velocity;
    double time;
    double acceleration;

    printf("Enter the start velocity : ");
    scanf("%lf", &start_velocity);

    printf("Enter the final velocity : ");
    scanf("%lf", &final_velocity);

    printf("Enter the time : ");
    scanf("%lf", &time);

// A = Vf - V0 / T 
    acceleration = (final_velocity - start_velocity) / time;

    printf("The acceleration is %lf", acceleration);

return 0;
}