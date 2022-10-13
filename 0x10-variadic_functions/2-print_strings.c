#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: characters to use as a separator
 * @n: string count
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		if (str == NULL)
			str = "(nil)";
		if (i < (n - 1) && separator != NULL)
			printf("%s%s", str, separator);
		else
			printf("%s", str);
	}
	va_end(ap);
	putchar(10);
}
