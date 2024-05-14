#include <stdio.h>

int main(){

    float temp = 53;

if (temp >= 90 || temp <= 0){
    printf("the weather is BAD");
}

else if(temp >= 1 && temp <= 89){
    printf("the weather is GOOD");
}

else{
    printf("invalid? how did you even get here");
}

return 0;
}