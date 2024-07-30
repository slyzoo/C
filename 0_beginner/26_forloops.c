#include <stdio.h>

int main(){

// for loop, it repeats a section of code for a selected amount of time

// index means "i", you'll see "i" alot in the future
    for(int index = 1; index <= 10; index+=3){
// the for loop code means that the index while in the for loop will start from 1 and count up to 10
// if you did "index =+ [num]" it would add that amount to each time it went up, += 3 would do 1, 4, 7, 10 bc it stops at 10
        printf("%d \n", index);
    }

return 0;
}