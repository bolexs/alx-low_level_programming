#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ags;
	unsigned int i;
	char *str;

	va_start(ags, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ags, char*);

		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
	}
	va_end(ags);
	putchar('\n');
}
