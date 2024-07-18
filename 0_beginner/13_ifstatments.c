#include <stdio.h>

int main(){

    int age;

    printf("\nEnter your age : ");
    scanf("%d", &age);

// if this, then do that
    if(age >= 18){
        printf("\nYou're an adult");
    }

// else, BUT wut if
    else if(age < 0){
        printf("\nhow in the world are you alive");
    }

// else, what else is there
    else{
        printf("\nYou're a minor");
    }

return 0;
}