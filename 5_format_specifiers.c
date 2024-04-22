#include <stdio.h>

int main(){


    // %c = Character
    // %s = String
    // %f = Float
    // %lf = Double (Long float)
    // %d = Integer (Digit)

    // %0.1 = Decimal precision
    // %1.0 = Minimum field width
    // %-0 = Left align

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item 1: $%8.2f\n", item1);
    printf("Item 2: $%2.8f\n", item2);
    printf("Item 3: $%2f\n", item3);

    return 0;
}