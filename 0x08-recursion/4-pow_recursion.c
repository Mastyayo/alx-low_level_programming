#include "main.h"

/**
 * _pow_recursion - return the power of an integer
 * @x: integer
 * @y: power
 *
 * Return: The power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
