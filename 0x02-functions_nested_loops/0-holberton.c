#include "holberton.h"
/**
 *main - it is a program that prints Holberton, followed by a new line
 *Return: 0
 */
int main(void)
{
char strname[] = "Holberton";
int i = 0;

while (strname[i] != '\0')
{
_putchar(strname[i]);
i++;
}
_putchar('\n');
return (0);
}
