#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct stack_s - doubly linked list representation of the stack
 * @n: integer
 * @prev: points to the prev element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */

typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and  function
 * @opcode: the opcode
 * @f: function to handle  opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */

typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
int is_num(char *n);
size_t stack_len(const stack_t *h);
void build_arr(char *token_array[], char *buffer);
void find_func(char *token_array[], int y, stack_t **node);
void swap(stack_t **stack, unsigned int line_number);
stack_t *push(stack_t **stack, unsigned int line_number, char *n);
void pall(stack_t **stack, unsigned int __attribute__((unused)) line_number);
void _free(stack_t *head);
void add(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
int is_num(char *n);
void sub(stack_t **stack, unsigned int line_number);
void _div(stack_t **stack, unsigned int line_number);
void _mul(stack_t **stack, unsigned int line_number);
void _mod(stack_t **stack, unsigned int line_number);
#endif
