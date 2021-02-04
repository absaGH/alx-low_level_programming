#include <stdio.h>

/**
 * main - program that prints a-z in lowercase, excluding 'e' and 'q'
 *followed by a new line
 * Return: 0
 */

int main(void)
{
int lwr = 'a';
while (lwr <= 'z')
{
if (lwr == 'e' || lwr == 'q')
{
lwr += 1;
}
else
{
putchar(lwr);
lwr += 1;
}
}
putchar('\n');
return (0);
}
