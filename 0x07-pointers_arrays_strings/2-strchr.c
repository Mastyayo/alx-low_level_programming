#include "main.h"
#include <stdio.h>
/**
 * _strchr - gives the posistion of a char in str
 * @s: search
 * @c: char to get
 *
 * Return: a pointer to the first occurence of a char 'c'
 * if string 's' if NULL no char
 */

char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
