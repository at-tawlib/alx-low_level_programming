/**
 * rot13 - encodes a string using rot13
 * @str: string to encode
 * Return: coded string
 */
char *rot13(char *str)
{
	int i, j;
	char letter[] =   "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot_code[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
	{
		j = 0;
		while (letter[j] != '\0')
		{
			if (str[i] == letter[j])
			{
				str[i] = rot_code[j];
				break;
			}
			j++;
		}
	}
	return (str);
}
