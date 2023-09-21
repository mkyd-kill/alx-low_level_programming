#include "lists.h"
/**
 * _strlen - return the lenght of a string
 * @str: The string
 * Return: Lenght of the string
 */
int _strlen(const char *str)
{
	int count;

	if (str == NULL)
		return (0);
	for (count = 0; str[count] != '\0'; count++)
		;
	return (count);
}
/**
 * add_node_end - adds a new node at the
 * end of a linked list
 * @head: The first node
 * @str: The string
 * Return: Address to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));
	list_t *last = *head;

	if (new_node == NULL || str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		(*head) = new_node;
		return (*head);
	}
	do {
		last = last->next;
	} while (last->next != NULL);
	last->next = new_node;
	return (*head);
}
