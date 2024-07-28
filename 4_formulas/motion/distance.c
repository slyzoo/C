#include <stdio.h>
#include <math.h>

int main(){

    double distance;
    double time;
    double average_velocity;

    printf("Enter the average velocity : ");
    scanf("%lf", &average_velocity);

    printf("Enter the Time : ");
    scanf("%lf", &time);

// Vavg = d / t
    distance = average_velocity * time;

    printf("The distance is : %lf", distance);

return 0;
}