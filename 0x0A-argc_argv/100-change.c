#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimun number of coins
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 success 1 otherwise
 */
int main(int argc, char **argv)
{
	int coins = 0, c;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	c = atoi(argv[1]);
	if (c < 0)
	{
		printf("0\n");
		return (0);
	}
	for (; c >= 0;)
	{
		if (c >= 25)
			c -= 25;
		else if (c >= 10)
			c -= 10;
		else if (c >= 5)
			c -= 5;
		else if (c >= 2)
			c -= 2;
		else if (c >= 1)
			c -= 1;
		else
			break;
		coins += 1;
	}
	printf("%d\n", coins);
	return (0);
}
