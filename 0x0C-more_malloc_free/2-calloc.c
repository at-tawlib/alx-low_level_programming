#include <stdlib.h>
/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements of array
 * @size: size of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *str;

	if (nmemb == 0 || size == 0)
		return (NULL);
	str = malloc(nmemb * size);
	if (str == 0)
		return (NULL);
	/** set memory to 0 */
	for (i = 0; i < (nmemb * size); i++)
		str[i] = 0;
	return (str);
}
