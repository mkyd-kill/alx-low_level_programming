#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars, and initalizes it
 * @size: Array length
 * @c: Input character
 * Return: Array initialized with the char
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	/*If size if 0, return null*/
	if (size == 0)
		return (NULL);

	/*Array memory allocation*/
	array = (char *)malloc(size * sizeof(char));

	/*Return null if memory allocation fails*/
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
