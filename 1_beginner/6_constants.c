#include <stdio.h>
int main(){

// Constants, they cant be changed or altered by the program during runtime / execution

// there is no constant in this, meaning you can change the value
float pi_1 = 3.14159;
pi_1 = 1.23456;
printf("pi 1 = %f", pi_1);

// there is a constant here meaning you cant change it bc PI_2 = 3.14159
// if you try to change it, you'll get an error trying to change it
const float PI_2 = 3.14159;
printf("PI 2 = %f", PI_2);

return 0;
}