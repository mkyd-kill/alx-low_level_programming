#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: Binary number
 * Return: Unsigned int representation of the binary
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int m = 1, i = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '\0' && b[i] != '1')
			return (0);
	}
	for (i = i - 1; i >= 0; i--)
	{
		char c;

		c = b[i];
		if (c == '1')
		{
			result += m;
		}
		m = m * 2;
		if (i == 0)
			break;
	}
	return (result);
}
