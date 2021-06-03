#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array
 *
 * Return: If an error occurs - NULL
 *         Otherwise - a pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htbl;
	unsigned long int i;

	htbl = malloc(sizeof(hash_table_t));
	if (htbl == NULL)
		return (NULL);

	htbl->size = size;
	htbl->array = malloc(sizeof(hash_node_t *) * size);
	if (htbl->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		htbl->array[i] = NULL;

	return (htbl);
}
