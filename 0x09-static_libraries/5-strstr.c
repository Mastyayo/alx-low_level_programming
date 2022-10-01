#include "main.h"

/**
 * _strstr - locate a substring
 *
 * @haystack: string to search
 * @needle: sunstring to find
 *
 * Return: pointer to start of needle in haystack
 */

char *_strstr(char *haystack, char *needle)
{
	char *occurence, *temp;

	if (!*needle)
		return (haystack);

	while (*haystack)
	{
		if (*haystack == *needle)
		{
			occurence = haystack;
			temp = needle;
			while (*temp)
			{
				if (*haystack++ != *temp++)
				{
					haystack = occurence;
					break;
				}
			}
			if (occurence != haystack)
				return (occurence);
		}
		haystack++;
	}
	return (0);
}
