#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies the contents of a string 1 to string 2
 * @dest: String destination
 * @src: String source
 * Return: The copied string
 */
char *_strcpy(char *dest, char *src)
{
	char *original = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (original);
}
