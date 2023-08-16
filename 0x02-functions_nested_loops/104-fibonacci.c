#include <stdio.h>
/**
 * main - Prints the first 98 fibonacci numbers
 * Return: 0 (success)
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int next;
	int i;

	printf("%d, %d", a, b);
	for (i = 3; i <= 98; i++)
	{
		next = a + b;
		printf(", %d", next);
		a = b;
		b = next;
	}
	printf("\n");
	return (0);
}
