/**
 * _strspn - returns number of bytes in the initial segment of s which
 * consist only of bytes from accept
 * @s: string to be scanned
 * @accept: string containing the characters to match
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, len;

	len = 0;
	for (i = 0; accept[i] > '\0'; i++)
	{
		j = 0;
		while (s[j] >= '\0')
		{
			if (accept[i] == s[j])
			{
				len++;
				break;
			}
			j++;
		}
	}

	return (len);
}
