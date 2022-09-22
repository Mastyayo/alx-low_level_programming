#include "main.h"

/**
 * char *_strcat - Join two  strings
 * @dest: string des
 * @src: string source
 *
 * Return: Pointer to string concatinated
 */
char *_strcat(char *dest, char *src)
{
	int length, j;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
