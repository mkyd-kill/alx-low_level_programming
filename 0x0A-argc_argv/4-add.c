#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive argument numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 success 1 otherwise
 */
int main(int argc, char **argv)
{
	int i, sum;

	sum = 0;

	if (argc < 1)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		char *str;
		int b;

		str = argv[i];
		for (b = 0; str[b] != '\0'; b++)
		{
			if (str[b] < 48 || str[b] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
