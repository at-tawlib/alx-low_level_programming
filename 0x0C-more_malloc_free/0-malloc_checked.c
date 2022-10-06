#include <stdlib.h>
/**
* malloc_checked - allocate memeory using malloc
* @b: size to allocate
* Return: pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == 0)
		exit(98);

	return (p);
}
