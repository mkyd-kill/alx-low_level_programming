#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory
 * @str: The string
 * Return: A pointer to the newly allocated memory
 */
char *_strdup(char *str)
{
	int len, x;
	char *array;

	/*Return null if string is null*/
	if (str == NULL)
		return (NULL);
	/*calculating length of string*/
	for (len = 0; str[len] != '\0'; len++)
		;
	/*Array memory allocation*/
	array = (char *)malloc((len + 1) * sizeof(char));

	/*If array is null, return null*/
	if (array == NULL)
		return (NULL);
	/*Copying to the newly allocated memory*/
	for (x = 0; x < len; x++)
	{
		array[x] = str[x];
	}
	array[len + 1] = '\0';
	return (array);
}
