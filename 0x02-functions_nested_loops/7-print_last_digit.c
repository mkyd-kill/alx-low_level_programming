#include "main.h"
/**
 * print_last_digit - returns the last digit of a number
 * @n: The number to be checked
 * Return: The last value of a number
 */
int print_last_digit(int n)
{
	int c;

	c = n % 10;
	if (c < 10)
	{
		c = c * -1;
	}
	_putchar(c + '0');
	return (c);
}
