#include <stdio.h>

int main(){

    int number_1 = 21;
    int number_2 = 65;
    int number_3 = 7;
    int number_4 = 89;

// + addition
    int result_addition = number_1 + number_2;
printf("add : 21 + 65 = %d \n", result_addition);

// - subtraction
int result_subtraction = number_1 - number_2;
printf("subtract : 21 - 65 = %d \n", result_subtraction);

// * multiplcation
int result_multiply = number_1 * number_2;
printf("multiply : 21 * 65 = %d \n", result_multiply);

// / division
int result_divide = number_1 / number_2;
printf("divide : 21 / 65 = %d \n", result_divide);

// % remander / modulus
int result_remander = number_1 % number_2;
printf("remdander : 21 (remander) 65 = %d \n", result_remander);

// ++ increment (add 1)
number_3++;
printf("increment : 7 -> %d \n", number_3);

// -- decrement (minus 1)
number_4--;
printf("decrement : 89 -> %d \n", number_4);

// or another way to do these would be

number_1 += 4;
number_2 -= 5;
number_3 *= 7;
number_4 /= 2;
number_4 %= 4;

    return 0;
}