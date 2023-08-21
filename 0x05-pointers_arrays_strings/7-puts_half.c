#include "main.h"
/**
 * puts_half - prints a half subset of a string
 * @str: The input string
 * Return: void
 */
void puts_half(char *str)
{
	int start, mid;

	start = 0;
	while (str[start] != '\0')
		start++;

	mid = start / 2;

	if (start % 2 == 1)
		mid++;

	while (mid < start)
	{
		_putchar(str[mid]);
		mid++;
	}
	_putchar('\n');
}
