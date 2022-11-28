#include "lists.h"

/**
 * check_cycle -  checks if a singly linked list has a cycle in it.
 * @list: pointer to list
 * Return: 0 if no cycle and 1 if there is a cycle.
 */

int check_cycle(listint_t *list)
{
	listint_t *i;
	listint_t *pre;

	i = list;
	pre = list;

	while (list && i && i->next)
	{
		list = list->next;
		i = i->next->next;

		if (list == i)
		{
			list = pre;
			pre = i;
			while (1)
			{
				i = pre;
					while (i->next != list && i->next != pre)
				{
					i = i->next;
				}
				if (i->next == list)
					break;

				list = list->next;
			}
			return (1);
		}
	}

	return (0);
}
