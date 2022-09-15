#include "main.h"
/**
 * print_square - prints a square
 * @size: size of square
 */
void print_square(int size)
{
	if (size > 0)
	{
		int vertical = 0;

		while (vertical < size)
		{
			int horizontal = 0;

			while (horizontal < size)
			{
				_putchar('#');
				horizontal++;
			}
			_putchar(10);
			vertical++;
		}
	}
	else
	{
		_putchar(10);
	}
}
