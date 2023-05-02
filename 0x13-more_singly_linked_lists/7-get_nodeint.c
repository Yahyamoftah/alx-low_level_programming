#include "lists.h"

/**
 * get_nodeint_at_index - main
 * @head: an input
 * @index: an input
 * Return: returns 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
listint_t *node;
node = head;
for (i = 0; i < index && node != NULL; i++)
{
node = node->next;
}
return (node);
}
