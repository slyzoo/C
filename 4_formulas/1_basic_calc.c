#include <stdio.h>
#include <math.h>

int main (){

// basic 2 number vars and an operator
    char operator;
    double number1;
    double number2;
    double result;

// choosing operator
printf("Choose an operator [+, -, *, /]  : ");
scanf("%c", &operator);

// saying first number
printf("Say the first number : ");
scanf("%lf", &number1);


// choosing second number
printf("Say the second number : ");
scanf("%lf", &number2);

// choosing operator logic

switch(operator){

    case '+':
    result = number1 + number2;
    printf("result : %lf", result);
    break;

    case '-':
    result = number1 + number2;
    printf("result : %lf", result);
    break;

    case '*':
    result = number1 + number2;
    printf("result : %lf", result);
    break;

    case '/':
    result = number1 + number2;
    printf("result : %lf", result);
    break;

}

return 0;
}