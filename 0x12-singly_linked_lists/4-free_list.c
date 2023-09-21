#include "lists.h"
/**
 * free_list - frees up memory of a linked list
 * @head: First node
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;
	do {
		temp = head;
		free(temp->str);
		free(temp);
		head = head->next;
	} while (head != NULL);
}
