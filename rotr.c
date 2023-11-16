#include "monty.h"
/**
  *f_rotr- rotates the stack to the bottom
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *copy_head;

	copy_head = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy_head->next)
	{
		copy_head = copy_head->next;
	}
	copy_head->next = *head;
	copy_head->prev->next = NULL;
	copy_head->prev = NULL;
	(*head)->prev = copy_head;
	(*head) = copy_head;
}
