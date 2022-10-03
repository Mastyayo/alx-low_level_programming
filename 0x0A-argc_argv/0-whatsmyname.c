#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints name and goes to a new line
 * @argc: num of arguments
 * @argv: array of arguments .values
 * Return: Always 0 (success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
