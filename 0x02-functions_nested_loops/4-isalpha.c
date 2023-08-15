#include <ctype.h>
#include "main.h"
/**
 * _isalpha - checking for alphabets
 * @c: The character to be checked
 * Return: 1 if is alphabet otherwise 0
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		c = 1;
	}
	else
	{
		c = 0;
	}
	return (c);
}
