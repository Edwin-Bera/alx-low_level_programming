#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
* print_listint - prints all the elements of a listint_t list.
* @h: the head of the list
* Return:number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t num = 0;
	listint_t current = *h;

	if (h == NULL)
		return (0);
	while (!(current.next == h->next && num > 0))
	{
		num++;
		printf("%d\n", current.n);
		if (current.next == NULL)
			break;
		current = *(current.next);
	}
	return (num);
}
