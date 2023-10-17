#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: Binary number
 * Return: Unsigned int representation of the binary
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '\0' && *b != '1')
			return (0);
		result = (result << 1) + (*b - '0');
		b++;
	}
	return (result);
}
