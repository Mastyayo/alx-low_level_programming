#include "main.h"
/**reverse_array - Reverse an array of integers.
 * @a: array of integers
 * @n: number of element array
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int *start_c, *end_c, c;
	int i;

	/*Start_c and end_c is equal value of variable s*/
	start_c = a;
	end_c = a;

	/*Move the end_c to the last character*/
	for (i = 0; i < n - 1; i++)
	{
		end_c++;
	}

	/* Swap the char from start and end */
	/* index using begin_ptr and end_ptr */
	for (i = 0; i < n / 2; i++)
	{
		/*swap character*/
		c = *end_c;
		*end_c = *start_c;
		*start_c = c;

		/*update pointers positions*/
		start_c++;
		end_c--;
	}
}
