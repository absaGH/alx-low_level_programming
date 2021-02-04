#include <studio.h>

/**
 *main - it prints out a-z in lowercase excluding letters 'e' and 'q'
 *Return: 0
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
putchar('lwr');
lwr += 1;
}
}
putchar('\n');
return (0);
}

