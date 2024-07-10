#include <stdio.h>
#include <string.h>

int main(){

    char string1[] = "Sly";
    char string2[] = "zoo";

    /*
        strlwr(string1);                                // converts a string to a lowercase

        strupr(string1);                                // converts a string to a uppercase

        strcat(string1, string2);                       // appends both strings together
        strncat(string1, string2, 2);                   // appends an amount of characters to both strings

        strcpy(string1);                                // copys the string
        strncpy(string1, string2, 2);                   // copys an amount of characters to both strings

        strset(string1, 'a');                           // sets all characters of a string to a given character

        strrev(string1);                                // reverses a string

        int result = strlen(string1);                   // returns string length as an integer

        int result = strcmp(string1);                   // string compares all the charecters
        int result = strncmp(string1, string2, 1);      // string compares n characters

        int result = strcmpi(string1, string1);         // string compares all (ignore case)
        int result = strnicmp(string1, string1);        // string compares n characters (ignore case)
    */

    printf("%s", string1);

    return 0;
}