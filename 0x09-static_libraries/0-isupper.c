#include "holberton.h"

/**
 * _isupper - a function that checks whether c is uppercase or not
 * @c: character input
 * Return: 1 if c is uppercase, otherwise 0
 */
int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
return (1);
else
return (0);
}
