/**
 * _strncpy - copies a string into another string of n bytes
 * @dest: string to copy into
 * @src: strng to copy
 * @n: bytes to copy
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
