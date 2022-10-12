#include <stdlib.h>
/**
 * array_iterator - executes a function given as a parameter on each element of an array
 * @size: size of the array
 * @array: array passed
 * @action: pointer to the function you need to use
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
