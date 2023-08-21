#include "main.h"
/**
 * rev_string - prints a string in reverse
 * @s: The string
 * Return: void
 */
void rev_string(char *s)
{
	int str_len, str_start, str_end;
	char temp;

	str_start = 0;
	str_len = 0;

	while (s[str_len] != '\0')
	{
		str_len++;
	}
	str_end = str_len - 1;

	while (str_start < str_end)
	{
		temp = s[str_start];
		s[str_start] = s[str_end];
		s[str_end] = temp;

		str_start++;
		str_end--;
	}
}
