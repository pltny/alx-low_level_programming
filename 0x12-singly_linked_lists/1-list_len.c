#include "lists.h"

/**
 * list_len - a function that returns the number of elements in
 * a linked list_t list.
 *
 * @h: list
 * Return:  number of elements in a linked list_t
 */
size_t list_len(const list_t *h)
{

	size_t len;

	len = 0;
	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
