#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
// making a new digit
    int first_number;

// asking user for max number
    printf("Enter the first number : ");
    scanf("%d", &first_number);

// not completely sure?
    srand(time(0));
// makes the number with the max being the first_number
    int random_number = (rand() % first_number);

// prints the random number
    printf("the random number is %d", random_number);

return 0;
}