#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - it assigns a random number to varialbe 'n' when executed
 *if the number is greater than 0 it shows is positive; if the
 *number is 0 it shows is zero otherwise is negative, and then prints
 *out a new line
 *Return: 0
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}
return (0);
}


