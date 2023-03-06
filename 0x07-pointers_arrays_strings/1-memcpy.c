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


void *memcpy(void *dest, const void *src, size_t n)
{
char *dp = dest;
const char *sp = src;
while (n--)
*dp++ = *sp++;
return (dest);
}
