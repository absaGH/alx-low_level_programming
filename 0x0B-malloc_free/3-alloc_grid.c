#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - creates 2D array all values initialized to 0
 *@width: rows of 2D array
 *@height: columns of 2D array
 * Return: a pointer to a 2 dimensional array of integers or null
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i;
int j;
int k;
int *temp;

if (width <= 0 || height <= 0)
return (NULL);
grid = (int **)malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
*(grid + i) = (int *)malloc(width * sizeof(int));
if (*(grid + i) == NULL)
{
for (i = 0; i < height; i++)
{
temp = grid[i];
free(temp);
}
free(grid);
return (NULL);
}
}
for (k = 0; k < height; k++)
{
for (j = 0; j < width; j++)
{
grid[k][j] = 0;
}
}
return (grid);
}
