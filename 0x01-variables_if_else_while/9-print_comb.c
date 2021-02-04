#include <stdio.h>

/**
 *main - program that displays all possible combinations of single-digit
 *separated by comma
 *Return: 0
 */

int main(void)
{
int n;
int cma = 44;
for (n = 48; n <= 57; n++)
{
putchar(n);
if (n != 57)
{
putchar(cma);
putchar(32);
}
putchar('\n');
}
return (0);
}
