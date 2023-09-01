#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the multiplication of 2 numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 success 1 otherwise
 */
int main(int argc, char **argv)
{
	int i, mul;

	mul = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
		mul = mul * atoi(argv[i]);
	printf("%d\n", mul);

	return (0);
}
