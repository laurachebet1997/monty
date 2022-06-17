#include "monty.h"

/**
 * push - push element into the stack
 * @stack: stack given by main
 * @line_number: amount of lines
 * Return: void
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *newptr;

	if(stack == NULL)
	{
		fprintf(stderr, "L%d: stack not found\n", line_number);
		exit(EXIT_FAILURE);
	}
	newptr = malloc(sizeof (stack_t));
	if (newptr == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free(stack);
		exit(EXIT_FAILURE);
	}
	newptr->next = *stack;
	newptr->prev = NULL;
	/*newptr->n = arg.arg;*/
	if(stack)
	{
		(*stack)->prev = newptr;
	}
	*stack = newptr;
}
