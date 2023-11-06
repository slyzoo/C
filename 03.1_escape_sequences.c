#include <stdio.h>
int main(){

    /*
        escape sequences, a character combo made up of a backslash \ follwed by a letter or combo of digits, they specify the actions within a line and or string
        \n = newline
        \t = tab
        \" = double quotes
        \' = single quote
        \\ = backslashes

    */
   printf(" i\n love\n chicken\n alfredo\n");
   printf("\t i love pizza too\n");

   // you can make a 2d array too
   printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n");

    // you can make quotes too
   printf("\'quote text made by some dood\'");
   printf("\"quote text made by some dood\"");
    return 0;
}
