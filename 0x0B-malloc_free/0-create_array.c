#include <stdlib.h>

/**
 * create_array - creates array of chars
 * @size: size of array
 * @c: character to initialize to
 * Return: array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ch = malloc(size);
	for (i = 0; i < size; i++)
		*(ch + i) = c;
	return (ch);
}
