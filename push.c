#include "monty.h"

/**
 * is_num - checks if string contains a num
 * @n: string to check
 * Return: 0 if num, 1 if else
 */
int is_num(char *n) {
    int i = 0;

    while (n[i] != '\0' && (n[i] == ' ' || n[i] == '-'))
	{
		if ([i] == '-')
		{
			i++;
			if (n[i] == '\0') {
				return (1);
			}
		}
	}
    while (n[i] != '\0') {
        if (n[i] < '0' || n[i] > '9') {
            return 1;
        }
        i++;
    }
    return 0;
}

/**
 * push - insert node at the head of list
 * @stack: where to insert
 * @line_number: line number error
 * @n: argument for push
 * Return: new head
 */
stack_t *push(stack_t **stack, unsigned int line_number, char *n) {
    stack_t *new;
    int isNumber;
    int num;

    isNumber = is_num(n);
    if (isNumber != 0) {
        fprintf(stderr, "L%i: usage: push integer\n", line_number);
        exit(EXIT_FAILURE);
    }
    num = atoi(n);
    new = malloc(sizeof(stack_t));
    if (new == NULL) {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }
    new->n = num;
    new->prev = NULL;
    new->next = *stack;
    if (*stack != NULL) {
        (*stack)->prev = new;
    }
    *stack = new;
    return (*stack);
}
