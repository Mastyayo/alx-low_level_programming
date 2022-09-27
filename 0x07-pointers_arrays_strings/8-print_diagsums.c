#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sumof two diagonals
 * @a: square matrix which we will print the sum of diagonals
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int i;

	unsigned int sum, eSum;

	sum = 0;
	eSum = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[(size * i) + i];
		eSum += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", sum,  eSum);
}
