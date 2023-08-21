#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: The string
 * Return: void
 */
void print_rev(char *s)
{
	int string_length, i;

	string_length = 0;

	while (s[string_length] != '\0')
	{
		string_length++;
	}

	for (i = string_lenght - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
