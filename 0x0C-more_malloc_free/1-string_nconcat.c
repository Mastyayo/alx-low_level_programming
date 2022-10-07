#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - join two strings, if the size of second string is defined
 * @s1: string one
 * @s2: string two
 * @n: size
 * Return: pointer to strings joined
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, len_n;
	char *val;

	i =   0;
	len1 = 0;
	len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + len1))
		len1++;
	while (*(s2 + len2))
		len2++;

	if (n >= len2)
		len_n = len2;
	else
		len_n = n;

	val = malloc((len1 + len_n + 1) * sizeof(char));
	if (val == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		*(val + i) = *(s1 + i);
	for (i = len1; i < (len1 + len_n); i++)
		*(val + i) = *(s2 + i - len1);
	*(val + i) = '\0';

	return (val);
}
