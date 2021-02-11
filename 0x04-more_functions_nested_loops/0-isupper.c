#include "holberton.h"

/**
 * _isupper - a function that checks whether a character is uppercase
 * @ch: variable to sotre input character
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int ch)
{
if ((ch >= 'A') && (ch <= 'Z'))
return (1);
else
return (0);
}
