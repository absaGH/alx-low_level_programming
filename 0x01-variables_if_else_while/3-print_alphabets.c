#include <stdio.h>

/**
 *main - program that displays the alphabet in lowercase
 *followed by uppercase
 *Return: 0
 */

int main(void)
{
int lwr;
int upr;
for (lwr = 'a'; lwr <= 'z'; lwr++)
{
putchar(lwr);
}
for (upr = 'A'; upr <= 'Z'; upr++)
{
putchar(upr);
}
putchar('\n');
return (0);
}
