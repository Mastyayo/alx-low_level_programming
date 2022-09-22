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
{
	int row = 0, i = 0, j = 0, num = 0;
	int var1 = 0, var2 = 0, temp_num = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || row == 1)
	{
		if (i < 0)
			var1 = 0;
		else
			var1 = *(n1 + i) - '0';
		if (j < 0)
			var2 = 0;
		else
			var2 = *(n2 + j) - '0';
		temp_num = var1 + var2 + row;
		if (temp_num >= 10)
			row = 1;
		else
			row = 0;
		if (num >= (size_r - 1))
			return (0);
		*(r + num) = (temp_num % 10) + '0';
		num++;
		j--;
		i--;
	}
	if (num == size_r)
		return (0);
	*(r + num) = '\0';
	rev_string(r);
	return (r);
}
