#include "main.h"
/**
 * _check_sqrt - checks for squareroot
 * @x: First number
 * @y: Second number
 * Return: The squareroot
 */
int _check_sqrt(int x, int y)
{
	if (x == (y * y))
		return (y);
	else if ((y * y) >= a)
		return (-1);
	else
		return (_check_sqrt(x, y + 1));
}
/**
 * _sqrt_recursion - checks if a number has a square root
 * @n: The number
 * Return: The squareroot of the number
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (_check_sqrt(n, 0));
}
