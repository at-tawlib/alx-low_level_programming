#include <stdlib.h>

/**
 * _strdup - returns a pointer to a dupiclated string
* @str: string to copy
* Return: pointer of copied string
 */
char *_strdup(char *str)
{
	int i, size;
	char *new_str;

	/** get size of str */
	for (i = 0; str[i] != '\0'; i++)
		;
	size = i;

	new_str = malloc(size * sizeof(char) + 1);
	for (i = 0; i < size; i++)
		new_str[i] = str[i];

	return (new_str);
}
