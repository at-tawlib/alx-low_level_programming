/**
 * _strstr - locates a substring
 * finds the occurance of the substring needle in the string haystack
 * @haystack: string to search in
 * @needle: string to search
 * Return: a pointer to the beginning of the located substring 
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *ptr = 0;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				ptr = &haystack[j];
				return (ptr);
			}
		}
	}

	return (ptr);
}
