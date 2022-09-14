#include "main.h"
/**
 * _isalpha - chec if c is lowercase
 *
 * @c: character to check
 *
 * Return: 1 if c character is an alphabet, else 0.
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
