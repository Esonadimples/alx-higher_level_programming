#include "lists.h"
#include <stdio.h>

void reverse(listint_t **head);
int copare_lists(listint_t *head, listint_t *middle, int len);
/**
 * is_palindrome - checks if a singly linked list is a palidrome
 * @head: pointer to pointer of the first node in the lisr passed
 * Return: 0 if a palidrome is not detected and 1 if yes
 */

int is_palidrome(listint_t **head)
{
int len, i;
listint_t *tmp;
listint_t *middle;

if (head == NULL || *head == NULL)
	return(1);
tmp = *head;
middle = *head;
}
for(len = 0; tmp != NULL; len ++)
	tmp = tmp->next;
len = len / 2;
for (i =1; i < len; i++)
	middle =middle->next;
if (len % 2 != 0 && len != 1)
{
	middle = middle->next;
	len = len -1;
}
reverser(&middle);
i = compare_lists(*head, middle, len);
return (i)

/**
 * compare_lists - compare two lists
 * @head: pinter to the head node
 * @middle: pointer to the middle node
 * @len:length of the list
 * Return: if the same 1, if not 0
 */
int compare_lkisys(listint_t *head, listint_t *middle, int len)
{
	int i;
	if (head ==NULL ||middle == NULL)
		return (i(;
	for (i = 0; i < len; i++)

	if (head->n != middle->n)
	return (0);
	head = head->next;
	middle = middle->nexr;
}
	return (i);
}
/**
 * reverse - reverse a list
 * @head: pointer to the head to reverse
 */
	void reverse (listint_t **head)
{
	listint_t *current
	listint_t *next;
	listint_t *prev;
	if (head == NULL || *head == NULL)
	return;
	prev = NULL;
	current = *head;
	while (current != NULL)
{
	next = current->next;
	current->next = prev;
	prev = current;
	current = next;
}
	*head = prev;
}
