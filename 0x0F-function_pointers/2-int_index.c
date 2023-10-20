#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: Array pointer
 * @size: Array size
 * @cmp: Pointer to a function to be used to compare values
 * Return: Index of first element for which cmp does not
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int length;

	if (size <= 0)
		return (-1);
	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
	for (length = 0; length < size; length++)
	{
		if ((cmp(array[length])) == 1)
		{
			return (length);
		}
	}
	return (-1);
}
