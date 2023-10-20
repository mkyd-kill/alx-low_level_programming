#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * @array: Pointer array
 * @size: Array size
 * @action: Function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t array_index;

	if (action == NULL || array == NULL)
		return;
	for (array_index = 0; array_index < size; array_index++)
	{
		action(array[array_index]);
	}
}
