#include "main.h"

/**
 * _strcmp - Compare two strings
 * @s1: first string for comparing
 * @s2: secong string to compare
 *
 * Return: Integer number
 */

int _strcom(char *s1, char *s2)
{
	char *r = s1;
	char *l = s2;
	int res = 0;

	while (*r || *l)
	{
		res = *r - *l;
		if (res != 0)
			return (res);
		r++;
		l++;
	}
	return (res);
}
