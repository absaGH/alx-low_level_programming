#include <stdio.h>

/**
 * main - displays all arguments it recieves
 * @argc: number of arguments passed to the function
 * @argv: argument array of pointers to strings
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
