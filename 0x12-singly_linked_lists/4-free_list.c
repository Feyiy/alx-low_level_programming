#include <stdlib.h>
#include "lists.h"

/**
  * free_list - this frees a linked list
  * @head: the pointer to the first node of linked list
  *
  * Return: this return nothing
  */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}

	free(head);
}
