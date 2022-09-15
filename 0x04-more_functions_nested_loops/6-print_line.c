#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: number of lines to draw
 */
void print_line(int n)
{
	int lines = 0;

	if (n > 0)
	{
		while (lines < n)
		{
			_putchar('_');
			lines++;
		}
	}
	_putchar('\n');
}
