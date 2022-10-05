#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns 2D array
 * @width: width of array
 * @height: height of array
 * Return: pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
	int **array_2D, i, j;

	array_2D = malloc(height * sizeof(*array_2D));
	if (width <= 0 || height <= 0 || array_2D == 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array_2D[i] = malloc(width * sizeof(**array_2D));
		if (array_2D[i] == 0)
		{
			/** free everything if malloc fails */
			while (i--)
				free(array_2D[i]);
			free(array_2D);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			array_2D[i][j] = 0;
	}
	return (array_2D);
}
