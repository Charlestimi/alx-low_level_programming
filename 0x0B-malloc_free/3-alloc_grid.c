#include "main.h"

/**
 *alloc_grid - a two dimensional array
 *@width: number of columns
 *@height: number of rows
 *Return: pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int **timi;
	int j;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	timi = malloc(sizeof(int *) * height);

	if (timi == NULL)
		return (NULL);

	for( i = 0; i < height; i++);
	{
		timi[i] = malloc(sizeof(int) * width);
		if (timi[i] == NULL)
		{
			free(timi);
			for (j = 0; j <= height; j++);
				free(timi[j]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			timi[i][j] = 0;
	}
	return (timi);
}
