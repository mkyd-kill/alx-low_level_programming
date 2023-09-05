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

	/*Array memory allocation*/
	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
		/*Return NULL if memory allocation fails*/
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
