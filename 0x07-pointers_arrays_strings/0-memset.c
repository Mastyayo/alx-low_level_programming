#include "main.h"

/**
 * _memset - Fills meemory with constnt time location s to b
 * @s: source string
 * @b: constant byte
 * @n: len of buffer
 * Return: new string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
