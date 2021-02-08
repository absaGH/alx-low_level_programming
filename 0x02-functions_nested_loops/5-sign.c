#include "holberton.h"
/**
 *print_sign - display the sign of a number
 *@num: an integer value to be tested whether it is +ve or -ve
 * Return: 1 if +ve, 0 if 0 and -1 if -ve
 */
int print_sign(int num)
{
if (num > 0)
{
_putchar('+');
return (1);
}
else if (num < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
