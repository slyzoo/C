#include <stdio.h>

int main(){

    double length;
    double width;
    double result;

    printf("\nEnter the width? : ");
    scanf("%lf", &width);

    printf("\nEnter the length? : ");
    scanf("%lf", &length);

    result = length * width;

    printf("the result is %0.2lf", result);

return 0;
}