#include "holberton.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: store the concatenated strings
 * @src: string to copy from
 * @n: max bytes to be used from src to be concatenated with dest
 * Return: the concatenated strings
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;

for (i = 0; dest[i] != '\0'; i++)
{
}
for (j = 0; j < n; j++)
{
dest[i + j] = src[j];
if (src[j] == '\0')
j = n;
}
return (dest);
}
