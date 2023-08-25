#include "main.h"
/**
 * _strncat - Returns the concatenation of two strings using n bytes
 * @dest: Output destination
 * @src: Input destination
 * @n: Byte number from src
 * Return: The added string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	if (j < n)
	{
		dest[i] = '\0';
	}
	return (dest);
}
