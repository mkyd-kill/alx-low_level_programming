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
 * check_pal - checks for palidrome
 * @s: String
 * @n: Start
 * @e: End
 * Return: 1 if yes 0 otherwise
 */
int check_pal(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (check_pal(s, start + 1, end - 1));
}
/**
 * is_palidrome - checks if a string is a palidrome
 * @s: The string
 * Return: 1 if yes 0 otherwise
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	
	return (check_pal(s, 0, len - 1));
}
