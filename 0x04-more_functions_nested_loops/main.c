#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	/** for 0-isupper.c
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
	*/ 

	/** 1-isdigit.c **/
	/*
	char c;
	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));
	*/

	/** 2-mul.c **/
	/*
	printf("%d\n", mul(98, 1024));
	printf("%d\n", mul(-402, 4096));
	*/

	/** 3-print_numbers.c **/
	/** print_numbers(); **/
	
	/** 4-print_most_numbers.c **/ 
	/** print_most_numbers(); **/ 

	/** 5-more_numbers **/
	/** more_numbers(); **/

	/** 6-print_line.c **/
	/*
	print_line(0);
	print_line(2);
	print_line(10);
	print_line(-4);
	*/

	/** 7-print_diagonal **/
	/*
	print_diagonal(0);
	print_diagonal(2);
	print_diagonal(10);
	print_diagonal(-4);
	*/

	/** 8-print_square.c **/
	/*
	print_square(2);
	print_square(10);
	print_square(0);
	*/

	/** 10-print_triangle.c **/
	/*
	print_triangle(2);
	print_triangle(10);
	print_triangle(1);
	print_triangle(0);
	*/

	print_number(98);
	_putchar('\n');
	print_number(402);
	_putchar('\n');
	print_number(1024);
	_putchar('\n');
	print_number(0);
	_putchar('\n');
	print_number(-98);
	_putchar('\n');

    return (0);
}
