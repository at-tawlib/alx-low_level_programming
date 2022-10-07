#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *int_array, i;

	if (min > max)
		return (NULL);
	int_array = malloc(((max - min) + 1) * sizeof(int));
	if (int_array == 0)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		int_array[i] = min;
	return (int_array);
}
