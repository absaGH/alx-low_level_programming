#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - deallocates memory assigned dynamically
 *@grid: rows of grid
 *@height: columns of grid
 * Return: a pointer to a 2 dimensional array of integers or null
 */
void free_grid(int **grid, int height)
{
int i;
int *temp;

for (i = 0; i < height; i++)
{
temp = grid[i];
free(temp);
}
free(grid);
}
