#include "monty.h"
/**
 * pall - function that prints the elements of the
 * linked lists from the head to the end
 * @stack: parameter referencing to the nodes
 * @line_number: unused in this case
 */
void pall(stack_t **stack, unsigned int  __attribute__((unused)) line_number)
{
	stack_t *ptr;

	ptr = *stack;
	if (*stack == NULL)
		return;
	while (ptr !=  NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
}
/**
 * pint - function that prints the head of our stack
 * @stack: parameter nodes refrecence
 * @line_number: line number being read from the monty file
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%i: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%i\n", (*stack)->n);
}
/**
 * pop - function that removes the first node of the stack
 * @stack: parameter refering to our nodes
 * @line_number: line number being read from the monty file
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%i: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	tmp = *stack;
	if ((*stack)->next == NULL)
	{
		free(*stack);
		*stack = NULL;
		return;
	}
	*stack = tmp->next;
	(*stack)->prev = NULL;
	free(tmp);
}
/**
 * add - adds the two top elements of the stack together and update
 * stacks with the new value and removes one of the elements
 * @stack: parameter refering to nodes
 * @line_number: line number being read from monty file
 */
void add(stack_t **stack, unsigned int line_number)
{
	int sum = 0;

	if (stack_len(*stack) < 2)
	{
		fprintf(stderr, "L%i: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	sum = (*stack)->n + (*stack)->next->n;
	(*stack)->next->n = sum;
	pop(stack, line_number);
}
/**
 * sub - substracts the tope element from the second top and updates the stack
 * @stack: refers to nodes
 * @line_number: line number resd from monty file
 */
void sub(stack_t **stack, unsigned int line_number)
{
	int sub = 0;

	if (stack_len(*stack) < 2)
	{
		fprintf(stderr, "L%i: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	sub = (*stack)->next->n - (*stack)->n;
	(*stack)->next->n = sub;
	pop(stack, line_number);
}
