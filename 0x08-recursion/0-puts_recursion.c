#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: the string
 * Return: void
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
printf('\n');
printf("%c", *s);
_puts_recursion(++s);
}
