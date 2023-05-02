#include "lists.h"

/**
 * free_listint - Frees a linked list.
 * @head: Pointer to head of linked list.
 *
 * Return: Always void.
 */
void free_listint(listint_t *head)
{
listint_t *temp;
while (head != NULL)
{
temp = head;
head = head->next;
free(temp);
}
}
