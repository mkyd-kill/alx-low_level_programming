#include "main.h"
/**
 * print_triangle - prints triangles
 * @size: Size of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= size; x++)
		{
			for (y = 0; y < size - i; y++)
			{
				_putchar(32);
			}
			for (z = 0; z < x; z++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
