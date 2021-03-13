include < stdlib.h >
#include "dog.h"

/**
 * new_dog - creates a new dog based on the inputs provided
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
unsigned int nlen, olen, i;
dog_t *dog;

if (name == NULL || owner == NULL)
return (NULL);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
for (nlen = 0; name[nlen]; len++)
;
nlen++;
dog->name = malloc(nlen *sizeof(char));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
for (i = 0; i < nlen; i++)
dog->name[i] = name[i];
dog->age = age;
for (olen = 0; owner[olen]; olen++)
;
olen++;
dog->owner = malloc(olen *sizeof(char));
if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
for (i = 0; i < olen; i++)
dog->owner[i] = owner[i];
return (dog);
}
