#include "3-calc.h"
#include <stdio.h>

/**
 * main - a simplec calculator
 * @argc: the number of argumentsr
 * @argv: the argument list
 *
 * Description: This program accepts its arguments from the command line.
 * The arguments area number, an operator and another number,
 * in that order. It performs the specified operation and prints the result to
 * standard output (followed by a newline). If called with the wrong number of
 * arguments, it prints "Error" and terminates the process with a status of 98.
 * If the operator given is not one of '+', '-', '*', '/' or '%', it prints
 * "Error" and terminates the process with a status of 99. If asked to perform
 * division by 0 (e.g. using the '/' or '%' operators), it prints "Error" and
 * terminates the process with a status value of 100.
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int (*f)(int, int);
if (argc != 4)
{
puts("Error");
exit(98);
}
f = get_op_func(argv[2]);
if (!f)
{
puts("Error");
exit(99);
}
printf("%d\n", f(atoi(argv[1]), atoi(argv[3])));
return (0);
}
