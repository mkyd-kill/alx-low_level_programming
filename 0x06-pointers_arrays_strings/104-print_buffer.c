#include <stdio.h>
#include <ctype.h>
/**
 * print_butter - prints a buffer
 * @b: The string
 * @size: The string size
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
		printf("\n");
	for (i = 0; i < size; i += 10)
	{
		printf("%08x ", i);
		for (j = i; j < i + 10; j += 2)
		{
			if (j < size)
			{
				printf("%02x", (unsigned char)b[j]);
				if (j + 1 < size)
				{
					printf("%02x ", (unsigned char)b[j + 1]);
				}
				else
				{
					printf("	");
				}
			}
			else
			{
				printf("	");
			}
		}
		for (j = i; j < i + 10; j++)
		{
			if (j < size)
			{
				if (isprint(b[j]))
				{
					printf("%c", b[j]);
				}
				else
				{
					printf(".");
				}
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}
