#include "lists.h"
/*
 * A constructor that executes before main
 */
void _print_first(void)__attribute__((constructor));
/**
 * _print_first - prints a text before main
 */
void _print_first(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
