/**
 * _memcpy - copies n bytes form memory area src to dest
 * @dest: memory destination
 * @src: memory are to be copied from
 * @n: number of bytes to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
