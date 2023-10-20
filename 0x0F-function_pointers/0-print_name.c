#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: Name to be printed
 * @f: Character pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
		f(name);
}
