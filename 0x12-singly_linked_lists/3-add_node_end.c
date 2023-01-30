#include "lists.h"

/**
 * add_node_end - adds a new node
 * @head: head of the list
 * @str: string to store
 * Return: address of the head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n, *temp;
	size_t nchar;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	n->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	n->len = nchar;
	n->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = n;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = n;
	}

	return (*head);
}
