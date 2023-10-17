#include "main.h"
/**
 * flip_bits - returns the number of bits to flip a number
 * @n: The number
 * @m: Another number
 * Return: Number of bits needed to flip the numbers
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned int count = 0;

	result = n ^ m;
	while (result)
	{
		count += result & 1;
		result >>= 1;
	}
	return (count);
}
