#include <stdio.h>

int main(){

    double large_diagonal;
    double small_diagonal;
    double area;

    printf("Enter the large diagonal : ");
    scanf("%lf", &large_diagonal);

    printf("Enter the small diagonal : ");
    scanf("%lf", &small_diagonal);

// Area = D * d / 2
    area = large_diagonal * small_diagonal / 2;

    printf("The area is : %0.2lf", area);

return 0;
}