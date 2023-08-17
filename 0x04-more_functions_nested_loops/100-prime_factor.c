#include <stdio.h>
#include <math.h>
/**
 * main - prints the largest prime factor of a number
 * Return: 0 (sucess)
 */
int main(void)
{
	int x, max;
	long numb = 612852475143;
	double square = sqrt(numb);

	for (x = 1; x <= square; x++)
	{
		if (numb % x == 0)
		{
			max = numb / x;
		}
	}
	printf("%d\n", max);

	return (0);
}
