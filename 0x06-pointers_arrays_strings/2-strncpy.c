/**
 * _strncpy - copiets a string
 * @dest: string to copy into
 * @src: strng to copy
 * @n: bytes to copy
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
