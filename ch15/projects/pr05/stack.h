#ifndef STACK_H
# define STACK_H

/* Macros */
#define STACK_SIZE 100

/* Global Variables */
extern int		operands[];
extern int		top;

/* Nested header */
#include <stdbool.h>

/* Prototypes */
void	make_empty(void);
bool	is_empty(void);
bool	is_full(void);
void	push(int i);
int		pop(void);
void	stack_overflow(void);
void	stack_underflow(void);

#endif