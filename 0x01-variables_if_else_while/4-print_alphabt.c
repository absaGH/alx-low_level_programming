#include <studio.h>

/**
 *main - it prints out a-z in lowercase excluding letters 'e' and 'q'
 *Return: 0
 */

int main(void)
{
int lwr;

for (lwr = 'a'; lwr <= 'z', lwr++)
{
if (lwr != 'e' && lwr != 'q')
{
putchar(lwr);
}
}
putchar('\n');
return (0);
}

