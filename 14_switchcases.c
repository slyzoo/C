#include <stdio.h>

int main(){

    char grade;

    printf("Enter your grade : ");

    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("\nPerfect!");
    break;

    case 'B':
        printf("\nGreat!");
    break;

    case 'C':
        printf("\nGood");
    break;

    case 'F':
        printf("\nbro how did you get here?");
    
    default:
        printf("You have not entered a vaild letter grade");
    break;
    }

return 0;
}