#include <stdio.h>

int main(){

    double large_side;
    double small_side;
    double height;
    double area;

    printf("Enter the large side : ");
    scanf("%lf", &large_side);

    printf("Enter the small side : ");
    scanf("%lf", &small_side);

    printf("Enter the height : ");
    scanf("%lf", &height);
// Area = B + b / 2 * h
    area = ((large_side + small_side) / 2) * height;

    printf("the area is : %0.2lf", area);

return 0;
}