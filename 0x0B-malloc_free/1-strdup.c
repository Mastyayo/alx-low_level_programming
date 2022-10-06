#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly alllocated space in memeory
 * @str: pointer to string to be duplicate
 *
 * Return: NULL if str is NULL. pointer if success, NULL if memory is not enough
 */

char *_strdup(char *str)
{
	char *mstr;
	unsigned int len, i;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;

	while  (str[len] != '\0')
	{
		len ++;
	}

	mstr = malloc(sizeof(char) * (len + 1));

	if (mstr == NLL)


	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		mstr[i] = str[i];
	}
	mstr[len] = '\0';
	return (mstr);
}
