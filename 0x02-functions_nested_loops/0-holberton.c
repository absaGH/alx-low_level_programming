#include "holberton.h"
/**
 *main - the program prints Holberton, followed by a new line.
 *Return: 0
 */

int main(void)
{
char strng[] = "Holberton";
int i = 0;

while (strng[i] != '\0')
{
_putchar(strng[i]);
i++;
}
_putchar('\n');
return (0);
}
