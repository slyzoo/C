#include <stdio.h>

int main(){

    double base;
    double height;
    double volume;

    printf("Enter the base : ");
    scanf("%lf", &base);

    printf("Enter the height : ");
    scanf("%lf", &height);

// volume = b*h
    volume = base * height;

    printf("The volume is : %lf", volume);

return 0;
}