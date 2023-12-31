#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a linked list
 * @head: a linked list
 */
void free_list(list_t *head)
{
	list_t *node, *current = head;

	while (current != NULL)
	{
		node = current->next;
		free(current->str);
		free(current);
		current = node;
	}
}
