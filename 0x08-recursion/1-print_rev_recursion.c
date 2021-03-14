#include "holberton.h"

/**
 * _print_rev_recursion - displays a string in reverse using recursion
 * @s: string to be displayed
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}
