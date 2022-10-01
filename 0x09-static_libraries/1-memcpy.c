#include "main.h"
/**
 * _memcpy - Copy n characters from memory area
 * @dest: Pointer to the destination array
 * @src: pointer to the source copied from
 * @n: Number of bytes copied
 *
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		dest[count] = src[count];
		count++;
	}
	return (dest);
}
