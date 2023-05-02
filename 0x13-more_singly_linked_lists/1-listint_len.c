#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
* listint_len - returns number of nodes in the list.
* @h: the head of the list
* Return:number of nodes
*/
size_t listint_len(const listint_t *h)
{
	size_t num = 0;
	listint_t current = *h;

	if (h == NULL)
		return (0);
	while (!(current.next == h->next && num > 0))
	{
		num++;
		if (current.next == NULL)
			break;
		current = *(current.next);
	}
	return (num);
}
