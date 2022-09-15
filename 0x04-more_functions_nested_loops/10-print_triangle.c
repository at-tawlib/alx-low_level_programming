#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of a triangle
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int vertical = 0;
		int space = size - 1;

		while (vertical < size)
		{
			int horizontal = 0;

			while (horizontal < space)
			{
				_putchar(' ');
				horizontal++;
			}

			while (horizontal < size)
			{
				_putchar('#');
				horizontal++;
			}

			_putchar(10);
			vertical++;
			space--;
		}
	}
	else
	{
		_putchar('\n');
	}
}
