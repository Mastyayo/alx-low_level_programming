#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - initialize memory space with zero
 * @nmemb: string 1
 * @size: string 2, concatinate to 1
 *
 * Return: pointer to concatinated state
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *new;

	if (nmemb == 0 || size == 0)
		return (NULL);

	new = malloc(nmemb * size);

	if (new == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		*(new + i) = 0;
	}
	return (new);
}
