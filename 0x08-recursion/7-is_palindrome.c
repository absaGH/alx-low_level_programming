#include "holberton.h"

/**
 * _strlen - return length of string
 * @str: string to check
 *
 * Return: length of str
 */
int _strlen(char *str)
{
if (*str == '\0')
return (0);
else
return (1 + _strlen(str + 1));
}

/**
 * test_palindrome - checks to see if a string is a palindrome
 * @indx1: left hand index
 * @indx2: right hand index
 * @str: the string to be tested for palindrome
 *
 * Return: 1 if palindrome 0 if not
 */
int test_palindrome(int indx1, int indx2, char *str)
{
if (indx1 >= indx2)
return (1);
else if (p[indx1] != str[indx2])
return (0);
else
return (check_palindrome(indx1 + 1, indx2 - 1, str));
}

/**
 * is_palindrome - deterimines whether a string is a palindrome
 * @s: string to be validated
 *
 * Return: 1 if the string is palindrome, 0 if not
 */
int is_palindrome(char *s)
{
int len;

len = _strlen(s) - 1;
return (test_palindrome(0, len, s));
}
