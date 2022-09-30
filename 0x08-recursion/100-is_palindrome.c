#include "main.h"
/**
 * s_len - calculates the length of a string
 * @s: string
 *
 * Return: len of string
 */
int s_len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + s_len(s + 1));
	}
}
/**
 * pal - check if a string is a palindrome i.e an empty string
 * @s: string
 * @i: initial point of recursion (start iterator)
 * @len: len of string
 * Return: 1 if empty string and 0 if not
 */

int pal(char *s, int i, int len)
{
	if (*(s + i) == *(s + len - 1 - i) && i == (len / 2))
	{
		return (1);
	}
	else if (*(s + i) != *(s + len - 1 - i))
	{
		return (0);
	}
	else
	{
		return (pal(s, i + 1, len));
	}
}
/**
 * is_palindrome - check if the string s is palindrome
 * @s: string
 *
 * Return: 1 if palindrome else 0
 */

int is_palindrome(char *s)
{
	if (pal(s, 0, s_len(s)) == 1)
		return (1);
	else
		return (0);
}
