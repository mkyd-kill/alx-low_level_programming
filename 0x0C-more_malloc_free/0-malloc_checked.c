#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: Input number
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *x;

	/*memory allocation*/
	x = malloc(b);

	if (x == NULL)
		/*causing normal process termination, status 98*/
		exit(98);
	return (x);
}
