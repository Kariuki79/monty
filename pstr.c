#include "monty.h"
/**
 * f_pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @head: the head of the stack
 * @counter: line_number
 * Return: no return
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *home;
	(void)counter;

	home = *head;
	while (home)
	{
		if (home->n > 127 || home->n <= 0)
		{
			break;
		}
		printf("%c", home->n);
		home = home->next;
	}
	printf("\n");
}
