#include "holberton.h"

/**
 * print_most_numbers - display digits from 0 to 9 excluding 2 and 4
 *
 * Return: nothing
 */
void print_most_numbers(void)
{
int i;

for (i = '0'; i <= '9'; i++)
{
if (i == '2' || i == '4')
continue;
else
_putchar(i);
}
_putchar('\n');
}
