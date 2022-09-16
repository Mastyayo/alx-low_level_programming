#include "main.h"
/**
 * print_square - prints a square followed by a new line
 * @size: the amount of squares to be printed
 *
 * Return: void
 */
void print_square(int size)
{
	int i, d;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			_putchar('#');
			for (d = 1; d < size; d++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
