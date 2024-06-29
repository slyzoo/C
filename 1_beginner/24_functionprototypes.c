#include <stdio.h>

// function prototype
void hello(char[], int){} 

int main () {

// function prototype is a :
// function declaration without a body, before the main program
// it also ensures that calls to a function are made with the correct arguments

    char name[] = "jade";
    int age = 17;

    hello(name, age);

return 0;
}

void hello (char name[], int age){
    printf("\n hello %s", name);
    printf("\n you're %d years old", age);
}