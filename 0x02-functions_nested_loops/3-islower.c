#include "holberton.h"
/**
 *_islower - a function that returns 1 if a letter is in lowercase,
 *0 otherwise.
 *@ch: is variable to hold the charater to be tested
 * Return: 1 if lowercase; 0 if not
 */
int _islower(int ch)
{
if (ch >= 'a' && ch <= 'z')
return (1);
else
return (0);
}

