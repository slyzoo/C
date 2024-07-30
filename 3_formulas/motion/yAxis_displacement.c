#include <stdio.h>
#include <math.h>

int main(){

    double distance;
    double gravity;
    double time;

    printf("Enter the time : ");
    scanf("%lf", &time);

    printf("Enter the gravity : ");
    scanf("%lf", &gravity);

// dist = gravity * time²

    distance = .5 * gravity * pow(time, 2);

    printf("The Time of Flight is : %lf", distance);
return 0;
}