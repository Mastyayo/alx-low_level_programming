#include "main.h"

/**
 * _strspn - get the prefix of a substring
 * @s: dtring to evaluate
 * @accept: string containig list of characters to match in s
 * Return: the number of bytes in the initial segment of 's'
 * which will consist of byte from 'accept'
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k, prf;

	k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		prf = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				prf = 1;
			}
		}
		if (prf == 0)
		{
			return (k);
		}
	}
	return (0);
}
