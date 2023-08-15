#include "main.h"
#include <ctype.h>
/**
 * _islower - checks for lower case letters
 * Return: 1 if is lower otherwise 0
 */
int _islower(int c)
{
	if (islower(c))
	{
		c = 1;
	}
	else
	{
		c = 0;
	}

	return (c);
}
