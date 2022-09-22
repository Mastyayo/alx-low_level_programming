#include "main.h"

/**
 * char *_strcat - Join two  strings
 * @dest: string des
 * @src: string source
 *
 * Return: Pointer to string concatinated
 */

char *_strcat(char *dest,  char *src)
{
	char *p = dest;

	while (*p != '\0')
		p++;
	while (1)
	{
		*p = *src;
		if(*src == '\0')
			break;
		p++;
		src++;
	}
	return (dest);
}
