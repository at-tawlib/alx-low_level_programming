/**
 * leet - encodes a string to 1337
 * @str: string to encode
 * Return: encoded string
 */
char *leet(char *str)
{
	int i, j;
	char letters[] = "aeotlAEOTL";
	char code[] = "4307143071";

	i = 0;
	while (str[i] != '\0')
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = code[j];
				break;
			}
		}

		i++;
	}

	return (str);
}
