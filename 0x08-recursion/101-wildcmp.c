#include "main.h"
/**
 * wildcmp - checks if two strings are identical
 * @s1: First string
 * @s2: Second string
 * Return: 1 if true 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if ((*s1 == *s2 && *s1 != '\0') || *s1 == '*' || (*s1 == '\0' && *s2 == '*'))
		return (wildcmp(s1 + 1, s2 + 1) || wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	return (0);
}
