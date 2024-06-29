#include <stdio.h>

int main(){

//  now we'll be doing first and last name

    char name[25]; // max is 25 bytes

    printf("\nwhat is your name? : ");

    fgets(name, 25, stdin);

    printf("\nyour name is %s", name);

    return 0;
}