#include "holberton.h"

/**
 * wildcmp - compares two strings and returns 1 if the strings
 * can be considered identical, otherwise return 0.
 * @str1: the first string to be compared
 * @str2: the second string to be compared
 *
 * Return: 1 if identical or o) otherwise
 */
int wildcmp(char *str1, char *str2)
{
if (*str1 == '\0' && *str2 == '\0')
return (1);
if (*str1 == *str2)
return (wildcmp(str1 + 1, str2 + 1));
if (*str2 == '*')
{
if (*(str2 + 1) != '\0' && *str1 == '\0')
return (0);
if (wildcmp(str1, str2 + 1) || wildcmp(str1 + 1, str2))
return (1);
}
return (0);
}
