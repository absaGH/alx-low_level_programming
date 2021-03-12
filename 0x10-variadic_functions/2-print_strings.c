#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - displays any number of inputed strings
 * @separator: the character to separate the inputerd strings
 * @n: the size of strings
 *
 * Return: nothing displays new line at the end
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i = 0;
char *str;

if (n > 0)
{
va_start(args, n);
while (i < n)
{
string = va_arg(args, char *);
if (str == NULL)
printf("%s", "(nil)");
else
printf("%s", str);
if (i != n - 1 && separator != NULL)
printf("%s", separator);
i++;
}
va_end(args);
}
printf("\n");
}
