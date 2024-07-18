#include <stdio.h>

int main(){

char area_type;
double pi = 3.14159;
double number1;
double number2;
double result;

prinf("choose the type of area\ncircle\nrectangle\n");
scanf("%c", area_type);

switch(area_type){

// circle area
    // A = π * r²
    case 'c':
    result = pi * pow(number1);
    printf("Area is : ");
    break;

// rectangle area
    // A = L * W
    case 'r':
    result = number1 * number2;
    printf("Area is : ");
    break;
}

return 0;
}