#include <stdio.h>

/**
 * main - Prints alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
for (c = 'A'; c <= 'Z'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
