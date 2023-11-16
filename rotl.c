#include "monty.h"
/**
  *f_rotl- rotates the stack to the top
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tech_m_p = *head, *auxiliary;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	auxiliary = (*head)->next;
	auxiliary->prev = NULL;
	while (tech_m_p->next != NULL)
	{
		tech_m_p = tech_m_p->next;
	}
	tech_m_p->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tech_m_p;
	(*head) = auxiliary;
}
