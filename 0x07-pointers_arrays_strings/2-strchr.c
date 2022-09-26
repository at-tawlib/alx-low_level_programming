/**
 * _strchr - gets a pointer to the first occurance of the character
 * c in the string s
 * @s: string to search in
 * @c: character to search in string
 * Return: pointer to first occurance of string or NULL
 */
char *_strchr(char *s, char c)
{
	int i;
	char *ptr;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			ptr = &s[i];
			break;
		}
	}

	return (ptr);
}
