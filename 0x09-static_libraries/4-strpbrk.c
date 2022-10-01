/**
 * _strpbrk - locates teh first occurance in the string s
 * of any of the bytes in the string accep
 * @s: string to be scanned
 * @accept: string containing the characters to match
 * Return: pointer to the character
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *ptr = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				ptr = &s[j];
				return (ptr);
			}
		}
	}

	return (ptr);
}
