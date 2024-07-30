#include <stdio.h>
#include <math.h>

int main(){

    double distance;
    double gravity;
    double time;

    printf("Enter the distance : ");
    scanf("%lf", &distance);

    printf("Enter the gravity : ");
    scanf("%lf", &gravity);

// dist = gravity * time²

    time = distance / (.5 * gravity);

    time = sqrt(time);

    printf("The Time of Flight is : %lf", time);
return 0;
}