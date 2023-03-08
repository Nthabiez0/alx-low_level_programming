#include "main.h"

/**
 * main - prints a string
 *
 * Retun: Always 0 (Success)
 */

void _puts_recursion(char *s);
{
if (*s == '\0')
{
printf("\n");
return;
}
printf("%c", *s);
print_string(s + 1)
return (0);
}
