#include <stdlib.h>
/**
 * malloc - allocate memeory using malloc
 * @b: size to allocate
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == 0)
		exit(98);

	return (p);
}
