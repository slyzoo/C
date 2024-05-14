#include <stdio.h>

int main(){
// we're doing just a number here

    int age;

// the question
    printf("how old are you? : ");

// the scan allows user input, and we're assigning the input into age
    scanf("%d", &age);

    printf("you are %d years old", age);

    return 0;
}