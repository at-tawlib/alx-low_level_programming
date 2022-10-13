#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H
#include <stdarg.h>

/**
 * struct print_everything - prints everything
 * @symbol: symbol representing a data type
 * @print: function pointer to a function that prints data
 */
typedef struct print_everything
{
	char *symbol;
	void (*print)(va_list arg);
} printer;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
