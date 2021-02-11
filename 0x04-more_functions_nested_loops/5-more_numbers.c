#include "holberton.h"

/**
 * more_numbers - display numbers from 0 to 14 excluding 2 and 4
 *
 * Return: nothing
 */
void more_numbers(void)
{
int i;
int j;
int ch;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 14; j++)
{
if (j > 9)
{
ch = j % 10;
_putchar('0' + (j / 10));
}
else
ch = j;
_putchar('0' + ch);
}
_putchar('\n');
}
}
