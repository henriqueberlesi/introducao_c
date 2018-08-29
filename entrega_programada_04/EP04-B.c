#include <stdio.h>

int main()
{
    int item, quantity, price, total_price;
    printf("Xodat: Welcome, adventurer, to Xodet's store!\nHere you can buy most of the magical artifacts that will help you through your journey.\nTake your time and look at our offers:\n");
    printf("     1. Avalanche Rune: 45gp\n");
    printf("     2. Blank Rune: 10gp\n");
    printf("     3. Destroy Field Rune: 15gp\n");
    printf("     4. Energy Wall Rune: 85gp\n");
    printf("     5. Fire Bomb Rune: 117gp\n");
    printf("     6. Great Fireball Rune: 45gp\n");
    printf("     7. Great Health Potion: 190gp\n");
    printf("     8. Great Mana Potion: 120gp\n");
    printf("     9. Mana Potion: 50gp\n");
    printf("     10. Sudden Death Rune: 108gp\n");
    printf("     11. Ultimate Healing Rune: 175gp\n");
    printf("Xodat: What item are you willing to buy?\n\nYou: ");
    scanf("%i", &item);
    printf("Xodat: Great! Now how many pieces of that item do you want?\n\nYou: ");
    scanf("%i", &quantity);

    switch (item)
    {
    case 1:
        price = 45;
        total_price = price * quantity;
        printf("Xodat: This rune reminds me of hunting Hellspawn's in Yalahar's Magician Quarter. Good old days...\n");
        printf("Xodat: Do you want to buy %d Avalanche Rune(s) for %d gold?\n\n", quantity, total_price);
        break;
    case 2:
        price = 10;
        total_price = price * quantity;
        printf("Xodat: A patient mage, then?\n\n");
        printf("Xodat: Do you want to buy %d Blank Rune(s) for %d gold?\n\n", quantity, total_price);
        break;
    case 3:
        price = 15;
        total_price = price * quantity;
        printf("Xodat: It's always good to keep one or ten of those in the backback, just in case...\n");
        printf("Xodat: Do you want to buy %d Destroy Field Rune(s) for %d gold?\n\n", quantity, total_price);
        break;
    case 4:
        price = 85;
        total_price = price * quantity;
        printf("Xodat: Good choise. It's always good to keep a few of those in Roshamuul's Plains.\n");
        printf("Xodat: Do you want to buy %d Energy Wall Rune(s) for %d gold?\n\n", quantity, total_price);
        break;
    case 5:
        price = 117;
        total_price = price * quantity;
        printf("Xodat: Sometimes, fire is needed to keep yourself strong in place\n");
        printf("Xodat: Do you want to buy %d Fire Bomb Rune(s) for %d gold?\n\n", quantity, total_price);
        break;
    case 6:
        price = 45;
        total_price = price * quantity;
        printf("Xodat: The fastest and easier way to clear some low level creatures.\n");
        printf("Xodat: Do you want to buy %d Great Fireball Rune(s) for %d gold?\n\n", quantity, total_price);
        break;
    case 7:
        price = 190;
        total_price = price * quantity;
        printf("Xodat: Make sure to have the enough knowledge to drink this potion. Low level knights doen't handle this much think so well...\n");
        printf("Xodat: Do you really want to buy %d Great Health Potion(s) for %d gold?\n\n", quantity, total_price);
        break;
    case 8:
        price = 120;
        total_price = price * quantity;
        printf("Xodat: Makesure to have the enough knowledge to drink this potion. Low level mages doen't handle this much think so well...\n");
        printf("Xodat: Do you really want to buy %d Great Mana Potion(s) for %d gold?\n\n", quantity, total_price);
        break;
    case 9:
        price = 50;
        total_price = price * quantity;
        printf("Xodat: Ah, the all-time favorite!\n");
        printf("Xodat: Do you want to buy %d Mana Potion(s) for %d gold?\n\n", quantity, total_price);
        break;
    case 10:
        price = 108;
        total_price = price * quantity;
        printf("Xodat: Going into a hunt, then? Will it be a creature or a playe... Oh, that's none of my business.\n");
        printf("Xodat: So you want to buy %d Sudden Death Rune(s) for %d gold?\n\n", quantity, total_price);
        break;
    case 11:
        price = 175;
        total_price = price * quantity;
        printf("Xodat: An oldschool player, then? Well, those don't work so well anymore. Ah, the good old days...\n");
        printf("Xodat: Do you really want to buy %d Ultimate Healing Rune(s) for %d gold?\n\n", quantity, total_price);
        break;
    }
    printf("You: Yes.\n\n");
    printf("Xodat: Great! Come back again soon.\n\n");
    return 0;
}
