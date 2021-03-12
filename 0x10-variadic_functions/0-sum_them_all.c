#include "variadic_functions.h"

/**
 * sum_them_all - it calculate the sum of any number of values
 * @n: the size of the input
 *
 * Return: 0 if n is 0, otherwise the sum
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i = 0;
int total = 0;

if (n != 0)
{
va_start(args, n);
while (i < n)
{
total += va_arg(args, int);
i++;
}
va_end(args);
return (total);
}
return (0);
}
