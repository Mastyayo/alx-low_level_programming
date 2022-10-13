#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - prints char, string, int, or char
 * @format: what type to print
 *
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	int space;
	char *string;

	va_list ap;

	va_start(ap, format);

	while (format && format[i])
	{
		space = 0;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				space = 1;
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				space = 1;
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				space = 1;
				break;
			case 's':
				string = va_arg(ap, char *);
				if (string == NULL)
					string = "(nil)";
				printf("%s", string);
				space = 1;
				break;
		}
		if (space == 1 && format[i + 1])
			printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}
