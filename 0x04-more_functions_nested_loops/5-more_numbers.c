#include "main.h"
/**
 * more_numbers - prints numbers
 * Return: void
 */
void more_numbers(void)
{
	int i, a;

	for (i = 0; i <= 9; i++)
	{
		for (a = 0; a <= 14; a++)
		{
			_putchar(a + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
