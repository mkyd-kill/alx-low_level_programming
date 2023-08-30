#include "main.h"
/**
 * _pow_recursion - returns the power a number
 * @x: First number
 * @y: Power of the number
 * Return: Power of the number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
