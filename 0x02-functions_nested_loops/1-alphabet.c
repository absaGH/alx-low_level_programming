#include "holberton.h"

/**
 * print_alphabet: a function that prints a-z in lowercase
 * followed by newline
 * Return: 0
 */

void print_alphabet(void)
{
int ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}