#include <stdio.h>

/**
 *main - it displays numbers from 00 to 99
 *separated by comma followed by space
 *Return: 0
 */

int main(void)
{
int n1;
int n2;
int cma = 44;
for (n1 = 48; n1 <= 57; n1++)
{
for (n2 = 48; n2 <= 57; n2++)
{
putchar(n1);
putchar(n2);
if (n1 != 57 || n2 != 57)
{
putchar(cma);
putchar(32);
}
}
}
putchar('\n');
return (0);
}
