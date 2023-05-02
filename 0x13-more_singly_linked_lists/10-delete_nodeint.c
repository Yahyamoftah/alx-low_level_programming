#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - main func
 * @head: an inpppp
 * @index: an inppppp
 * Return: returns 1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current, *temp;
unsigned int i;
if (head == NULL || *head == NULL)
return (-1);
current = *head;
if (index == 0)
{
*head = current->next;
free(current);
return (1);
}
for (i = 0; i < index - 1 && current != NULL; i++)
current = current->next;
if (current == NULL || current->next == NULL)
return (-1);
temp = current->next;
current->next = temp->next;
free(temp);
return (1);
}
