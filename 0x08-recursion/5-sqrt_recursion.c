#include "holberton.h"

/**
 * natural_sqrt - finds a sqrt if num has natural sqrt
 * @sqrtval: stores the final sqrt if num has natural sqrt
 * @num: number to find sqrt of
 *
 * Return: -1 or sqrt of num
 */
int natural_sqrt(int sqrtval, int num)
{
if (sqrtval * sqrtval == num)
return (sqrtval);
if (sqrtval * sqrtval > num)
return (-1);
return (natural_sqrt(sqrtval + 1, num));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 *
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
return (natural_sqrt(1, n));
}
