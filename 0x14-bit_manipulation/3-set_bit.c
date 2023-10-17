#include "main.h"
/**
 * set_bit - sets the value of bit to 1 at index
 * @n: The number
 * @index: Index
 * Return: 1 if success -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;
	*n |= mask;

	return (1);
}
