#include "main.h"
/**
 * prime_num - detects if the input is a prime number
 * @n: input number
 * @c: iterator
 * Return: 1 if n is prime number 0 if otherwise
 */

int prime_num(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + prime_num(n, c + 1));
}
/**
 * is_prime_number - detects if an input is a prime number
 * @n: input number
 * Return: 1 if nis a prime number 0 if otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 0)
		return (1);
	return (prime_num(n, 2));
}
