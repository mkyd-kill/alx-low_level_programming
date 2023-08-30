#include "main.h"
/**
 * _puts_recursion - using puts to print in recursion
 * @s: The string
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	_putchar('\n');
}
