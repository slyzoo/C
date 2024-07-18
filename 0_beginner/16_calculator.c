#include <stdio.h>

int main(){

    char operator;
    double number_1;
    double number_2;
    double result;


// what is the operator
    printf("\nEnter the operator? (+ - * /) : ");

    scanf("%c", &operator);

// what is the first number
    printf("\nEnter the first number? : ");

    scanf("%lf", &number_1);

// what is the second number
    printf("\nEnter the second number? : ");

    scanf("%lf", &number_2);

// result

    switch (operator)
    {
    case '+':
        result = number_1 + number_2;
        printf("result : %lf", result);
    break;

    case '-':
        result = number_1 - number_2;
        printf("result : %lf", result);
    break;

    case '*':
        result = number_1 * number_2;
        printf("result : %lf", result);
    break;
    
    case '/':
        result = number_1 / number_2;
        printf("result : %lf", result);
    break;

    default:
    printf("That is not vaild");
        break;
    }

return 0;
}