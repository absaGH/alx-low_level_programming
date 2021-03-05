#include <stdlib.h>
#include "holberton.h"
/**
 * malloc_checked - return pointer to allocated memory
 * @b: sizeof malloc
 * Return: return a pointer
 */
void *malloc_checked(unsigned int b)
{
void *p = NULL;

p = malloc(b);

if (!p)
{
exit(98);
}
return (p);
}
