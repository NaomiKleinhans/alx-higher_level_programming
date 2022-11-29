#include "lists.h"

/**
 * insert_node - insert new node at given position
 * @head: head of list
 * @number: number where new node is added
 * Return: Address of new node or NULL if failed
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *ne;
	listint_t *head;
	listint_t *head_pre;

	h = *h
	
	ne = malloc(sizeof(listint_t));

	if (ne == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (head->n > number)
			break;
		head_pre = head;
		head = head->next;
	}

	ne->n = number;

	if (*head == NULL)
	{
		ne->next = NULL;
		*head = ne;
	}
	else
	{
		ne->next = head;
		if (h == *h)
			*h = ne;
		else
			h_pre->next = ne;
	}

	return (ne);
}
