#include "main.h"
/**
 * _strncpy - returns a copied string
 * @dest: String destination
 * @src: String input
 * @n: Input string byte
 * Return: Copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; count < n; src[count] != '\0'; count++)
	{
		dest[count] = src[count];
	}
	for (; count < n; count++)
	{
		dest[count] = '\0';
	}
	return (dest);
}
