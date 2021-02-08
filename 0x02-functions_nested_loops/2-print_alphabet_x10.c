#include "holberton.h"
/**
 *print_alphabet_x10 - the function prints out a-z 10 times
 *on separate line each time
 *Return: void
 */
void print_alphabet_x10(void)
{
int ch;
int i = 0;

while (i < 10)
{
ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
i++;
}
}

