#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers
 *
 * @a: the input matrix
 * @size: size of matrix
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
int i, j, indx, sum1 = 0, sum2 = 0;

for (i = 0; i < size; i++)
{
indx = (i * size) + i;
sum1 += *(a + indx);
}
for (j = 0; j < size; j++)
{
indx = (j * size) + (size - 1 - j);
sum2 += *(a + indx);
}
printf("%i, %i\n", sum1, sum2);
}
