#include "main.h"

/**
 * char *_strncat - Join two strings together
 * @dest: String destined
 * @src: String source
 * @n: number of strings to concatinate
 *
 * Return: Pointer to string concatinated
 */

char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	char *p = dest;

	while (*p != '\0')
		p++;
	while (1)
	{
		if (*src == '\0' || count == n)
			break;
		*p = *src;
		count++;
		p++;
		src++;
	}
	return (dest);
}
