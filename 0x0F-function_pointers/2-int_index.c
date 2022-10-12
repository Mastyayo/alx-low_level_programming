#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: input integer array
 * @size: size of array
 * @cmp: pointer to function used to compare values
 *
 * Return: return first element for which cmp does not return 0
 * if no element matches return -1 if size less than 0 return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
