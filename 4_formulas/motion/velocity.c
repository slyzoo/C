#include <stdio.h>
#include <math.h>

int main(){

    double distance;
    double time;
    double average_velocity;

    printf("Enter the Distance : ");
    scanf("%lf", &distance);

    printf("Enter the Time : ");
    scanf("%lf", &time);

// Vavg = d / t
    average_velocity = distance / time;

    printf("The average velocity is : %lf", average_velocity);

return 0;
}