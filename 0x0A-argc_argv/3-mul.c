#include <stdio.h>
#include <stdlib.h>

/**
 * main - displays the product of two numbers
 * @argc: number of arguments passed to the function
 * @argv: argument array of pointers to strings
 *
 * Return: 0 if no errors, else 1
 */
int main(int argc, char *argv[])
{
int a, b, c;

if (argc != 3)
{
puts("Error");
return (1);
}
a = atoi(argv[1]);
b = atoi(argv[2]);
c = a *b;
printf("%d\n", c);
return (0);
}
