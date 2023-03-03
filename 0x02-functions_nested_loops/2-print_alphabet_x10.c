#include <stdio.h>

/**
 * main - Entry point
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
