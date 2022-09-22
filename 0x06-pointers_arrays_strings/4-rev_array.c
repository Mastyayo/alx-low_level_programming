#include "main.h"
/**reverse_array - Reverse an array of integers.
 * @a: array of integers
 * @n: number of element array
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int temp, counter;

	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		temp = a[counter];
		a[counter++] = a[n];
		a[n--] = temp;
	}
}
