#include "push_swap.h"

void	push(t_stack *stack, int intiger)
{
	if (aamr(stack) == 1)
	{
		return ;
	}
	else
	{
		stack->fogani = stack->fogani + 1;
		stack->arr[stack->fogani] = intiger;
	}
}
void	pop(t_stack *stack)
{
	int	i;

	i = 0;
	if (khawi(stack) == 1)
	{
		return ;
	}
	else
	{
		i = stack->arr[stack->fogani--];
	}
}
int	aamr(t_stack *stack)
{
	if (stack->fogani == stack->size - 1)
	{
		return (1);
	}
	else
		return (0);
}
int	khawi(t_stack *stack)
{
	if (stack->fogani == -1)
	{
		return (1);
	}
	else
		return (0);
}
void	reverserotator(t_stack *stack)
{
	int temp;
	int i;

	i = 0;
	temp = stack->arr[0];
	while (i <= stack->fogani)
	{
		stack->arr[i] = stack->arr[i + 1];
		i++;
	}
	stack->arr[stack->fogani] = temp;
}