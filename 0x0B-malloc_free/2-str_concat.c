#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - returns a pointer to a new memory
 * containing the concatenation of 2 strings
 *
 * @s1: Input string 1
 * @s2: Input string 2
 * Return: Returns a pointer to a new memory
 */
char *str_concat(char *s1, char *s2)
{
	int lenA, lenB;
	char *array;

	/*If s1 is null, return empty*/
	if (s1 == NULL)
		s1 = "";
	/*If s2 is null, return empty*/
	if (s2 == NULL)
		s2 = "";
	/*Finding length of s1*/
	for (lenA = 0; s1[lenA] != '\0'; lenA++)
		;
	/*Finding length of s2*/
	for (lenB = 0; s2[lenB] != '\0'; lenB++)
		;
	/*Array memory allocation*/
	array = (char *)malloc(((lenA + lenB) + 1) * sizeof(char));

	if (array == NULL)
		return (NULL);
	/*Adding s1 to the array memory*/
	for (lenA = 0; s1[lenA] != '\0'; lenA++)
	{
		array[lenA] = s1[lenA];
	}
	/*Adding s2 to the array memory*/
	for (lenB = 0; s2[lenB] != '\0'; lenB++)
	{
		array[lenA] = s2[lenB];
		lenA++;
	}
	return (array);
}
