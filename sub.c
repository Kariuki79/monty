#include "monty.h"
/**
  *f_sub- sustration
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *auxiliary;
	int sus_ia, nodes_st;

	auxiliary = *head;
	for (nodes_st = 0; auxiliary != NULL; nodes_st++)
		auxiliary = auxiliary->next;
	if (nodes_st < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	auxiliary = *head;
	sus_ia = auxiliary->next->n - auxiliary->n;
	auxiliary->next->n = sus_ia;
	*head = auxiliary->next;
	free(auxiliary);
}
