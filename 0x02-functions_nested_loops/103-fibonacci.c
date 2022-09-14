#include <stdio.h>
/**
 * main - print first 50 fibonacci
 *
 * Return: 0 always (success)
 */
int main(void)
{
	long int i, x = 1, y = 2, sum = 0, total_sum = 0;

	for (i = 0; i < 49; i++)
	{
		if ((y % 2 == 0) && (y <= 4000000))
		{
			total_sum += y;
		}
		sum = x + y;
		x = y;
		y = sum;
	}
	printf("%ld\n", total_sum);
	return (0);
}
