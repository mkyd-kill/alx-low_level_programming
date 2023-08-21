#include "main.h"
/**
 * rev_string - prints a string in reverse
 * @s: The string
 * Return: void
 */
void rev_string(char *s)
{
	int len, i;
	char temp;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
