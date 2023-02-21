#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *alloc_grid - This function returns a pointer to a 2 dimensional array
 *of integers.
 *@width: This is the amount that i need know of my subarray.
 *@height: This is the amount that i need know of array to use malloc
 *Return: always is grind
 */
int **alloc_grid(int width, int height)

{

	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(*grid) * height);

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(**grid) * width);
		if (grid[i] == NULL)

		{
			for (; i >= 0; i--)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}

