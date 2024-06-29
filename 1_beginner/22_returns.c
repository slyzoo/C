#include <stdio.h>

double square(double x){

//  the square times 3.14 to itself and returns it back to the main function
    return x * x ;
}

int main (){

//  square function, it is == 3.14
    double x = square(3.14);

//  the square functions new value is printed to the terminal
    printf("%lf", x);

return 0;
}