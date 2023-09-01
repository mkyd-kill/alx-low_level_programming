#include <stdio.h>
/**
 * main - prints every argument it receives
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 success 1 otherwise
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
