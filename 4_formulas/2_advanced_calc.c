#include <stdio.h>
#include <math.h>

int main (){

// basic 2 number vars and an operator
    char operator;
    double number1;
    double number2;
    double result;

// choosing operator
printf("Choose an operator [√ = q, exp = p, sin = s, c = cos, tan = t]  : ");
scanf("%c", &operator);

// saying first number
printf("Say the first number : ");
scanf("%lf", &number1);


// choosing second number
printf("Say the second number : ");
scanf("%lf", &number2);

// choosing operator logic

switch(operator){

    case 'q':
    result = sqrt(number1);
    printf("result : %lf", result);
    break;

    case 'p':
    result = pow(number1, number2);
    printf("result : %lf", result);
    break;

    case 's':
    result = sin(number1);
    printf("result : %lf", result);
    break;

    case 'c':
    result = cos(number1);
    printf("result : %lf", result);
    break;

    case 't':
    result = tan(number1);
    printf("result : %lf", result);
    break;
}



return 0;
}