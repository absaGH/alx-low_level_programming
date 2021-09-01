#include "search_algos.h"

/**
 * display_array - prints an array of integers
 * @array: array to print
 * @size: size of array
 *
 * return: void
 */
void display_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array:");
	for (i = 0; i < size; i++)
	{
		printf(" %d", array[i]);
		if (i != size - 1)
			printf(",");
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array of integers using the
 * Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located, or -1 on failure
 */
int binary_search(int *array, size_t size, int value)
{
	size_t bottom, mid, top;

	if (array != NULL && size > 0)
	{
		bottom = 0;
		top = size - 1;
		display_array(array + bottom, top + 1 - bottom);
		while (bottom < top)
		{
			mid = (bottom + top) / 2;
			if (array[mid] < value)
				bottom = mid + 1;
			else if (array[mid] > value)
				top = mid;
			else
				return (mid);
			display_array(array + bottom, top + 1 - bottom);
		}
	}
	return (-1);
}

/**
 * minimum_value - finds the minimum of two values
 * @a: first value to compare
 * @b: second value to compare
 *
 * Return: The smaller of the two values, or a if equal
 */
size_t minimum_value(size_t a, size_t b)
{
	if (b < a)
		return (b);
	return (a);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located, or -1 on failure
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, low;
	int r;

	if (array != NULL && size > 0)
	{
		while (bound < size && array[bound] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
			bound *= 2;
		}
		low = bound / 2;
		bound = minimum_value(size - 1, bound);
		printf("Value found between indexes [%lu] and [%lu]\n", low, bound);
		r = binary_search(array + low, bound + 1 - low, value);
		if (r >= 0)
			return (r + low);
	}
	return (-1);
}
