#include "main.h"

/**
 * malloc_checked - allocate memory using malloc
 * @b: int.
 * Return: a pointer to allocate memeory
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
