#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - prints the chessboard
 *
 * @a: the row of the array
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
int i;
int sum1 = 0;
int sum2 = 0;
for (i = 0; i < size; i++)
{
sum1 += matrix[i * size + i];
sum2 += matrix[i * size + size - i - 1];
}
printf("%d %d\n", sum1, sum2);
}

int main(void)
{
int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
print_diagsums(&matrix[0][0], 3);
return (0);
}
