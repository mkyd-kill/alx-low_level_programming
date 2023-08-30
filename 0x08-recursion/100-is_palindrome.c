#include "main.h"
/**
 * is_palidrome - checks if a string is a palidrome
 * @s: The string
 * Return: 1 if yes 0 otherwise
 */
int is_palidrome(char *s)
{
	int len = _strlen_recursion(s);
	int i, j;

	for (i = 0; j = len - 1; i < j; i++, j--)
	{
		if (s[i] != s[j])
		{
			return (0);
		}
	}
	return (1);
}
