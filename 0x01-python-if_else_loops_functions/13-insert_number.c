#include "lists.h"

/**
 * insert_node - insert new node at given position
 * @head: head of list
 * @number: number where new node is added
 * Return: Address of new node or NULL if failed
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new;
	listint_t *h;
	listint_t *h_pre;

	h = *head;
	
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	while (h != NULL)
	{
		if (h->n > number)
			break;
		h_pre = h;
		h = h->next;
	}

	new->n = number;

	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
	}
	else
	{
		new->next = h;
		if (h == *head)
			*head = new;
		else
			h_pre->next = new;
	}

	return (new);
}
