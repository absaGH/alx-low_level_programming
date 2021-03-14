#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to be used for length counting
 * count: variable to store lenght of the string
 *
 * Return: string length
 */
int _strlen_recursion(char *s)
{
int count = 0;
if (*s == '\0')
return (0);
count++;
return (count + _strlen_recursion(s + 1));
}
