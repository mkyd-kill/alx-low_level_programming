#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: Input separator
 * @n: Input number
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		char *string;

		string = va_arg(list, char *);

		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);

		if (separator != NULL && (i + 1) != n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
