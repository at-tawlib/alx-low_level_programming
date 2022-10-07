#include <stdlib.h>
/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements of array
 * @size: size of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;

	if (nmemb == 0 || size == 0)
		return (NULL);
	str = malloc(nmemb * size);
	if (str == 0)
		return (NULL);
	return (str);
}
