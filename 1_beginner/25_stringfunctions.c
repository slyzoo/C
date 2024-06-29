#include <stdio.h>
#include <string.h>

int main(){

    char string1[] = "Sly";
    char string2[] = "zoo";

    /*
        strlwr(string1);       converts a string to a lowercase
        strupr(string1);       converts a string to a uppercase
        strcat(string1);       appends both strings together
        strncat(string1);      appends an amount of characters to both strings
        strcpy(string1);       copys the string
        strncpy(string1);      copys an amount of characters to both strings
        strset(string1, 'a');  sets all characters of a string to a given character
        strrev(string1);       reverses a string
    */

    printf("%s", string1);

    return 0;
}