#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase ten times
 */
void print_alphabet_x10(void)
{
	int times = 0;

	while (times < 10)
	{
		int alphabet = 97;

		while (alphabet <= 122)
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar(10);
		times++;
	}
}
