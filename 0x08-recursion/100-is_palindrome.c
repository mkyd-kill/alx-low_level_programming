#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: The string
 * Return: The length
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
/**
 * is_palidrome - checks if a string is a palidrome
 * @s: The string
 * Return: 1 if yes 0 otherwise
 */
int is_palidrome(char *s)
{
	int len = _strlen_recursion(s);
	int i, j;

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		if (s[i] != s[j])
		{
			return (0);
		}
	}
	return (1);
}
