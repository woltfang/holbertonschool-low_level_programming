#include "lists.h"
/**
 * find_listint_loop - function that finds the loop in a linked list.
 * @head: Head of the listint.
 * Return: The address of the node where the
 * loop starts, or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *head2 = head;

	while (head && head2 && head2->next)
	{
		head = head->next;
		head2 = head2->next->next;
		if (head == head2)
			return (head);
	}
	return (0);
}
