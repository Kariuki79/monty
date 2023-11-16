#include "monty.h"
/**
 * f_push - add node to the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_push(stack_t **head, unsigned int counter)
{
	int nov, jul = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			jul++;
		for (; bus.arg[jul] != '\0'; jul++)
		{
			if (bus.arg[jul] > 57 || bus.arg[jul] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	nov = atoi(bus.arg);

	if (bus.lifi == 0)
		addnode(head, nov);
	else
		addqueue(head, nov);
}
