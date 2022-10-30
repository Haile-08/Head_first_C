#include <stdio.h>

/**
 * main - Entry point
 * 
 * Return: none
*/

int main(void)
{
    char ex[20];
    puts("Enter name:");
    scanf("%19s",ex);
    printf("You name is %s\n", ex);
    return (0);
}