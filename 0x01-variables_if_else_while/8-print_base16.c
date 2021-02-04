#include <stdio.h>

/**
 *main - displays all the digits of base 16 in lowercase
 *Return: 0
 */

int main(void)
{
int n;
int ch;
for (n = 48; n <= 57; n++)
{
putchar(n);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
