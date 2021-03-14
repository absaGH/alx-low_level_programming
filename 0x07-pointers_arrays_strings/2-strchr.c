#include "holberton.h"

/**
 * _strchr - Locates a character in a string.
 * @s: The string to be searched.
 * @c: The character to be located.
 *
 * Return: If c is found - a pointer to the first occurence.
 *         If c is not found - NULL.
 */
char *_strchr(char *s, char c)
{
int len, index;

len = 0;
while (s[len] != '\0')
len++;
for (index = 0; index <= l; index++, s++)
{
if (*s == c)
return (s);
}
return (0);
}
