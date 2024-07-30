#include <stdio.h>

// this calc only calcs how much items you need, as i cant do it in my head and constantly forget

int overworld_tools(){

// overworld tools
    // sword & hoe = 2 material
    int swordAndHoe = 2;
    // axe & pickaxe = 3 material
    int axeAndPick = 3;
    // shovel = 1 material
    int shovel = 1;

// the total materials it takes to make all the tools (without sticks)
    int overworld_tools_total = (swordAndHoe * 2) + (axeAndPick * 2) + shovel;
    printf("Tools total material (sticks not included) : %d \n",overworld_tools_total);

return overworld_tools_total;
}

int overworld_armour(){

// overworld armour
    // helmet = 5 material
    int helmet = 5;
    // chestplate = 8 material
    int chestplate = 8;
    // leggings = 7 material
    int leggings = 7;
    // boots = 4 material
    int boots = 4;

// the total materials it takes to make all the armour
    int overworld_armour_total = helmet + chestplate + leggings + boots;
    printf("Armour total material : %d \n", overworld_armour_total);

return overworld_armour_total;
}

int main(){

    int total_tools = overworld_tools();
    int total_armour = overworld_armour();

    int overworld_armourAndTools = total_armour + total_tools;
    printf("Armour&Tools total material (sticks not included) : %d \n", overworld_armourAndTools);


return 0;
}