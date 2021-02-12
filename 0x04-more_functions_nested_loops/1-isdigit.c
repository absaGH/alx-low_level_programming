#include "holberton.h"

/**
 * _isdigit -  a function that tests whether a character is digit 0-9
 * @ch: a variable to input character value
 * Return: 1 if ch is a digit, 0 otherwise
 */
int _isdigit(int ch)
{
if ((ch >= 48) && (ch <= 57))
return (1);
else
return (0);
}
