#include <stdio.h>

/**
 * main - prints numbers between 0 to 9 and letters between a to f
 *
 * Retun: Always 0 (Success)
 */

int main(void)
{
int i;
for (i = 0; i < 16; i++)
{
if (i < 10)
{
putchar(i + '0');
}
else
{
putchar(i + 'a' - 10);
}
}
putchar('\n');
return (0);
}
