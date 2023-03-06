#include <stdlib.h>
#include "main.h"

/**
 *_strchr - Locates a character in a string
 *
 * @c: the character we're looking for
 * @s: string to check
 *
 * Return: pointer to the first occurrence of the character c in the string s,
 * Return NULL if the character is not found
 */


char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
return (NULL);
}
