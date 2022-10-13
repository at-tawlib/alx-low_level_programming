#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	sum = 0;
	va_start(ap, n);
	for (i = n; i != 0; i = va_arg(ap, unsigned int))
		sum += i;
	va_end(ap);
	return (sum);
}
