#include <monty.h>
/**
 *
 *
 *
 **/

void push(stack_t **stack, unsigned int line_num, char *n)
{
	stack_t *new;
	int num;
	int isNumber;

	isNumber = is_num(n);
	if (isNumber == 1)
	{
		fprintf(stderr, "L%i: usage: push integer\n", line_num)
			exit(EXIT_FAILURE);
	}
	num = atoi(n);
	new = malloc(sizeof(tack_t));
	if (new == NULL)
	{
		fprintf(stderr, "can't allocate memory\n");
		exit(EXIT_FAILURE);
	}
new->n = num;
new->prev = NULL;
new-> = *stack;
if (*stack != NULL)
	(*stack)->prev = new;
*stack = new;
return (*stack);
}
/**
 *
 *
 *
 *
 **/
int is_num(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[0] == '-')
		{
			i++;
			continue;
		}
		if (n[0] == '\n')
			return (1);
		if (n[i] == '\n')
			break;
		if (n[i] < 48 || n[i] > 57)
			return (1);
		i++;
	}
	return (0);
}
