#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - dealocates the memory reserved for dog
 * @d: pointer to dog to free
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
