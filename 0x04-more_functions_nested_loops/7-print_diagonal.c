#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number or lines to draw
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int line = 0;

		while (line < n)
		{
			int space = 0;

			while (space < line)
			{
				_putchar(' ');
				space++;
			}
			_putchar('\\');
			_putchar(10);
			line++;
		}
	}
	else
	{
		_putchar(10);
	}
}
