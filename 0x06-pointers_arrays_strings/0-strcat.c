#include "main.h"
/**
 * _strcat - returns the additions of two strings
 * @dest: First string
 * @src: Second string
 * Return: Addition of first and second
 */
char *_strcat(char *dest, char *src)
{
	char *original = dest;

	for (; *dest != '\0';)
	{
		dest++;
	}
	for (; *src != '\0';)
	{
		*dest = *src;
		dest++;
		src++
	}
	*dest = '\0';
	return (original);
}
