#include <stdio.h>

int main(){

// Tools total material (sticks not included) : 11
// Armour total material : 24
// Armour&Tools total material (sticks not included) : 35

    int userAmount;
    int Tools = 11;
    int Armour = 24;
    int ToolsAndArmour = 35;

// asks for material count
    printf("How much material do you have? : ");
    scanf("%d", &userAmount);

// if material count is below
// say "is too low"
if (userAmount < Armour)
{
    printf("Not Enough Materials");
}

// if material count is exact
// say "exactly enough"
else if (userAmount == Armour)
{
    printf("Exactly Enough Materials");
}

// if material count is above
// say "is enough, and say remander after"
else if (userAmount > Armour)
{
    userAmount = userAmount - Tools;
    printf("Enough Materials, %d would be left if you crafted all armour", userAmount);
}

return 0;
}