#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase
 */
void print_alphabet(void)
{
	int alphabet = 97;

	while (alphabet <= 122)
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar(10);
}
