#include <stdio.h>
#include <ctype.h>

int main(){

    char unit;

    float temp;

    printf("Is the temperature in F or C : ");

    scanf("%c", &unit);

    unit = toupper(unit);

    if( unit == 'C'){
        printf("what is the temperature? : ");
        scanf("%f", &temp);

//      F = C * 9 / 5 + 32
        temp = (temp * 9 / 5 + 32);

        printf("The Temp in F is : %f", temp);
    }

    else if(unit == 'F'){
        printf("what is the temperature?");
        scanf("%f", &temp);

//      C = ((F - 32) * 5) / 9
        temp = ((temp - 32)* 5) / 9 ;

        printf("The Temp in C is : %f", temp);
    }

    else{
        printf("That is not a valid ");
    }

return 0;
}