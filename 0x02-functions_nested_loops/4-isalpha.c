#include "holberton.h"
/**
 *_isalpha - test whether a given character is alphabet or not.
 *@ch: variable to store the character to be tested
 *Return: 1 if the character is alphabet and 0 otherwise
 */
int _isalpha(int ch)
{
if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
return (1);
else
return (0);
}
