#include <stdio.h>
/**
 * main - prints the number of arguments passed
 * @argc: Number of arguments
 * @argv: Array of arguments passed
 * Return: 0 success 1 otherwise
 */
int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	(void)argv;

	return (0);
}
