#include "main.h"
/**
 * _strncat - concatenates two strings of n bytes
 * @dest: string to concatenate to
 * @src: string to use for concatination
 * @n: number of bytes to use
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len;

	for (i = 0; dest[i] != '\0'; i++)
		;
	len = i;
	for (i = 0; i < n && src[1] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}

	dest[len + i] = '\0';
	return (dest);
}
