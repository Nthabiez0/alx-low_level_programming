#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: segment to return bytes from
 * @accept: the bytes to include
 *
 * Return: the number of bytes in the initial segment of @s which consist only
 * of bytes from @accept
 */

unsigned int _strspn(char *s, char *accept)
{
const char *p;
const char *a;
unsigned int count = 0;

for (p = s; *p != '\0'; ++p)
{
for (a = accept; *a != '\0'; ++a)
{
if (*p == *a)
break;
}
if (*a == '\0')
return (count);
++count;
}

return (count);
}
