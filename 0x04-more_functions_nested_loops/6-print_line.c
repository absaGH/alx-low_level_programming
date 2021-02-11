#include "holberton.h"

/**
 * print_line - display a line depending on the value given
 * @n: input
 *
 * Return: nothing
 */
void print_line(int n)
{
int i;

for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
