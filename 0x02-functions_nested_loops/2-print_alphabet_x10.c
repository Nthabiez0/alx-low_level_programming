#include <stdio.h>

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
int j;

for (i = 0; i < 10; i++)
{
for (j = 'a'; j <= 'z'; j++)
{
putchar(j);
}
putchar('\n');
}
return (0);
}
