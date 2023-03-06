#include "main.h"

/**
 * _memcpy - A function that copies memory area
 *
 * @dest: where to copy the memory to
 * @n: the number of bytes
 * @src: the memory area to copy from
 *
 * Return: a pointer to @dest
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
char *dp = dest;
const char *sp = src;
while (n--)
*dp++ = *sp++;
return (dest);
}
