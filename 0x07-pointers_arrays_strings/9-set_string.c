#include "holberton.h"
#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: pointer that will be forced to point to another character
 * @to: pointer to the character used to set the first pointer
 *
 * Return: nothing
 */
void set_string(char **s, char *to)
{
*s = to;
}
