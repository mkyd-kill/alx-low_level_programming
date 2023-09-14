#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - returns the sum of all file args
 * @n: Number of args passed
 * Return: Sum of all file args
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list; /*variable macro list*/
	int sum;
	unsigned int i;

	sum = 0;

	/*starting the macro*/
	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}


	/*terminating the macro*/
	va_end(list);
	return (sum);
}
