#include "sort.h"

/**
 *insertion_sort_list - extract elements and inster sorted in another
 *@list: is the list with the nodes
 *Return: will return nothing (void)
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *rNode, *lNode;

	if (!list || !(*list) || !(*list)->next)
	{
		return;
	}

	rNode = (*list)->next;

	while (rNode != NULL)
	{
		while (rNode->prev != NULL && rNode->prev->n > rNode->n)
		{
			lNode = rNode->prev; /* Giving first pos to lNode */
			rNode->prev = lNode->prev;

			if (rNode->next != NULL)
				rNode->next->prev = lNode;

			lNode->next = rNode->next;
			rNode->next = lNode;

			if (lNode->prev != NULL)
				lNode->prev->next = rNode;

			lNode->prev = rNode;

			if (rNode->prev == NULL)
			{
				*list = rNode;
			}
			print_list(*list);
		}
		rNode = rNode->next;
	}
}
