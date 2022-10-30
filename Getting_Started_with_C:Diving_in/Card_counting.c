#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * 
 * Return: 0
*/

int main(void)
{
    char card[3];
    int count = 0;
    puts("Enter the card_name: ");
    scanf("%2s", card);
    if (card[0] == 'K')
    {
        count = 10;
    }
    else if (card[0] == 'Q')
    {
        count = 10;
    }
    else if (card[0] == 'J')
    {
        count = 10;
    }
    else if (card[0] == 'A')
    {
        count = 11;
    }
    else
    {
        count = atoi(card);
    }

    if ((card[0] <= 3) && (card[0] >= 6))
    {
        puts("Count has gone up");
    }
    else if((count == 11) || (count == 10))
    {
        puts("Count has gone down");
    }
return (0);
}