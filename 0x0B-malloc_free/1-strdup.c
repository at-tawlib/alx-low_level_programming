#include <stdlib.h>

/**
 * _strdup -
 */
char *_strdup(char *str)
{
	int i, size;
	char *new_str;

	/** get size of str */
	for (i = 0; str[i] != '\0'; i++)
		;
	size = i;

	new_str = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
		new_str[i] = str[i];

	return (new_str);
}
