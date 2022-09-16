#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - prints a line n chars long
 * @n: number of \ lines
 * 92 - Ascii value of diagonal line
 * d - diagonal spaces
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, d;


	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (d = 0; d < i; d++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
