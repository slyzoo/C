#include <stdio.h>
#include <stdbool.h>

int main (){

    float temp = 100;
    bool sunny = false;

if (temp >= 90){
    printf("the weather is HOT, but at least its shady");
}

else if (temp >= 90 && sunny){
    printf("just stay inside, its not worth it");
}

else if(temp <= 0){
    printf("the weather is COLD");
}

else if (temp <= 89 && temp >= 1 && sunny){
    printf("the weather is nice");
}

else{
    printf("invalid? how did you even get here");
}

return 0;
}