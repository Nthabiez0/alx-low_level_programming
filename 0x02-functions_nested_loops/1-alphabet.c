#include "main.h"

/**
 *Print_alphabet -print alphabet in lowercase
 */

void print_alphabet(void)
{
char alpha = 'a';
while (alpha <= 'z')
{
_putchar(alpha);
alpha++;
}
_putchar('\n');
}
