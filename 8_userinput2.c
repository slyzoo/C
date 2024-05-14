#include <stdio.h>

int main(){

// just a first name here

    char name[25]; // max is 25 bytes

    printf("\nwhat is your name? : ");

    scanf("%s", &name);

    printf("\nyour name is %s", name);
return 0;
}