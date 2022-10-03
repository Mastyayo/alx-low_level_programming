#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the amount of arguments passed
 * @argc: argument count
 * @argv: arg array
 *
 * Return: always o
 */

int main(int argc, char *argv[])
{
	(void)*argv;
	printf("%d\n", argc - 1);

	return (0);
}
