#include <stdio.h>

int findMax(int x, int y){
    /* 
    first it checks to see if x is greater than y
    then it checks to see is y is greater than x
    then it returns which ever is greater
    */
    return (x > y) ? x : y ;

}

int main(){

    int max = findMax(3, 4);

    printf("%d", max);

return 0;
}