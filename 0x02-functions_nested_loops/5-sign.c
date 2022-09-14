#include "main.h"

/**
 * print_sign - Test if c is greater than zero, less or equal to 0
 * @n: Number to test
 *
 * Return: 1 and print + if n is greater thatn zero
 *
 * 0 and prints 0 if n is zero
 *
 * -1 and prints - if n is less than zero
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
