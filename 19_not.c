#include <stdio.h>
#include <stdbool.h>

int main (){

    bool sunny = false;

    if (sunny){
        printf("it is sunny outside");
    }

    else if (!sunny){
        printf("it is not sunny");
    }

    else{
        printf("how did this happen");
    }

return 0;
}