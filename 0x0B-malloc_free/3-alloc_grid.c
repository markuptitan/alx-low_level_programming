#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2-dimensional array of integers
 * @width: The width of the grid
 * @height: The height of the grid
 *
 * Return: On success, a pointer to the 2D array of integers.
 *         On failure or invalid input, NULL.
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;
/* Check for invalid input */
if (width <= 0 || height <= 0)
return (NULL);
/* Allocate memory for the rows */
grid = malloc(sizeof(int *) * height);
/* Check if malloc failed */
if (grid == NULL)
return (NULL);
/* Allocate memory for the columns and initialize elements to 0 */
for (i = 0; i < height; i++)
{
grid[i] = malloc(sizeof(int) * width);
/* Check if malloc failed */
if (grid[i] == NULL)
{
/* Free previously allocated memory on failure */
for (j = 0; j < i; j++)
free(grid[j]);
free(grid);
return (NULL);
}
/* Initialize elements to 0 */
for (j = 0; j < width; j++)
grid[i][j] = 0;
}
return (grid);
}
