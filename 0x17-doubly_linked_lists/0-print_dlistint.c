#include "lists.h"

/**
 * print_dlistint - This function prints all the elemets in the List.
 * @h: The head of the dlistint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nd = 0;

	while (h)
	{
		n++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nd);
}
