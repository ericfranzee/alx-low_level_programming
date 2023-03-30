#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_list - s
 * @head: s
 * Return: s
 */
void free_list(list_t *head)
{
	list_t *tmp;
		while (head)
		{
			tmp = head->next;
			free(head->str);
			free(head);
			head = tmp;
		}
}