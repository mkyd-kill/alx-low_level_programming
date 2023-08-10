/*
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include<stdio.h>

int main(void)
{
	printf("Size of char: %zu byte(s)\n", sizeof(char));
	printf("Size of int: %zu byte(s)\n", sizeof(int));
	printf("Size of long int: %zu byte(s)\n", sizeof(long));
	printf("Size of long long int: %zu byte(s)\n", sizeof(double));
	printf("Size of float: %zu byte(s)\n", sizeof(float));

	return (0);
}
