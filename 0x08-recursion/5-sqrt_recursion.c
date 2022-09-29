#include "main.h"

/**
 * raise_root - returns a natural square root number
 * @n: input int
 * @c: loop or iterator
 * Return: square root or -1
 */

int raise_root(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + raise_root(n, c + 1));
}

/**
 * _sqrt_recursion - returns the natural number square root of a number
 *  @n: input number
 *  Return: natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (raise_root(n, 2));
}
