#include "lists.h"

/**
 * sum_listint - main func
 * @head: an inpp
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
int sum = 0;
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return
{
sum;
}
}
