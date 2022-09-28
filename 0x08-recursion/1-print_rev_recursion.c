void _print_rev_recursion(char *s)
{
	int i, len;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
		len++;

	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar(10);
}
