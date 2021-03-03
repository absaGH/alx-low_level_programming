#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copies a string to a newly allocated memory
 *@str: The string to be copied
 * Return: a pointer to the copied string or NULL
 */
char *_strdup(char *str)
{
char *copiedstr = NULL;
unsigned int i;
int n;

if (str == NULL)
return (NULL);
for (n = 0; str[n] != '\0'; n++)
;
copiedstr = (char *)malloc(n + 1 * sizeof(char));
if (copiedstr != NULL)
{
for (i = 0; str[i] != '\0'; i++)
copiedstr[i] = str[i];
}
else
{
return (NULL);
}
copiedstr[i] = '\0';
return (copiedstr);
}
