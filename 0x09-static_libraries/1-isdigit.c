#include "main.h"
/**
 *  _isdigit - a function that cjecjs for digit (0 through 9)
 *
 *  @c: in to look for
 *
 *  Return: 1 if c is digit, else 0
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
