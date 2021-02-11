#include "holberton.h"
#include <stdio.h>

/**
 * main - solves Fizz-Buzz test
 *
 * Return: 0.
 */
int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if ((i % 3 == 0) && (i % 5 == 0))
{
printf("FizzBuzz\t");
}
else if ((i % 5) == 0)
{
printf("Buzz\t");
}
else if ((i % 3) == 0)
{
printf("Fizz\t");
}
else
{
printf("%d\t", i);
}
}
_putchar('\n');
return (0);
}
