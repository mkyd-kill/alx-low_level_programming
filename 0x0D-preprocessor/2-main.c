#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints its own filename
 * Return: 0 success 1 otherwise
 */
int main(void)
{
	printf(__FILE__);
	printf("\n");

	return (EXIT_SUCCESS);
}
