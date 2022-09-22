#include "main.h"

/**
 * _strcmp - Compare two strings
 * @s1: first string for comparing
 * @s2: secong string to compare
 *
 * Return: value less than 0 if string is less than the other.
 * value greater than 0 if string is greater than the other.
 * 0 if strings are equal.
 */
int _strcmp(char *s1, char *s2)
{
	int counter, cmpVal;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}

	cmpVal = s1[counter] - s2[counter];
	return (cmpVal);
}
