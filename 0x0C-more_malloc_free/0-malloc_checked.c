#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - return a pointer to an allocated memory
 * @b: allocated int
 *
 * Return: 98 if error otherwise address
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);
	return (mem);
}
