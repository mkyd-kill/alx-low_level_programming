#include "main.h"
#include <ctype.h>
/**
 * _isdigit - check is its a number
 * @c: Number to be checked
 * Return: 1 if true 0 false
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
