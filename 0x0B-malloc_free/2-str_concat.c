#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 *@s1: string 1
 *@s2: string 2
 * Return: pointer pointing to a newly concatenated string in memory or NULL
 */
char *str_concat(char *s1, char *s2)
{
char *strnew = NULL;
unsigned int i;
int j;
int k;
int count;

count = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (j = 0; s1[j] != '\0'; j++)
;
for (k = 0; s2[k] != '\0'; k++)
;
strnew = (char *)malloc(j + k + 1) * sizeof(char))
if (strnew == NULL)
{
return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
strnew[i] = s1[i];
for (; s2[count] != '\0'; i++)
{
strnew[i] = s2[count];
count++;
}
return (strnew);
}
