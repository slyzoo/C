#include <stdio.h>
#include <string.h>

int main(){

// while loop, repeats a part of the code *while* it is true

char name[25];

    printf("Enter your name? : ");

// for the spaces that might be in the name
    fgets(name, 25, stdin); 

// \0 is a null char
// if the string length(name) is -1 then it is equal too the null character
    name[strlen(name) - 1] = '\0';

// same stuffs but in a while loop
while(strlen(name) == 0){
    printf("YOU DID NOT ENTER YOUR NAME!?\n");
    printf("Enter your name? : ");
    fgets(name, 25, stdin); 
    name[strlen(name) - 1] = '\0';
}

    printf("hello %s", name);
return 0;
}