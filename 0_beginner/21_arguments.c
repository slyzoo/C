#include <stdio.h>

void birthday(char name[], int age){
    printf("\nhappy birthday to %s", name);
    printf("\nYou are %d years old", age);
}


int main (){

    char name[] = "slyzoo";
    int age = 17;

    birthday(name, age);

return 0;
}