#include <stdio.h>

/**
 *main - program that prints out a-z in lowercase
 *it use only putchar
 *Return: 0
 */

int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
