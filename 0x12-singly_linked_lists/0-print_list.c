#include "lists.h"
/**
 * print_list - prints elements of a linked list
 * @h: The linked list array
 * Return: The node number
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	if (h == NULL)
		return (0);
	do {
		if (h->str == NULL)
			printf("[%u] (nil)\n", h->len);
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		i += 1;
		h = h->next;
	} while (h != NULL);
	return (i);
}
