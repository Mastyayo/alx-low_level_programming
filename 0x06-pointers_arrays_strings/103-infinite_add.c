#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
 */
void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n = i);
		*(n + i) = temp;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @n1: text rep of first num
 * @n2: text rep of 2nd num
 * @r: pointer to buffer
 * @size_r: bufffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
