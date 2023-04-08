/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali < nbouhali@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 16:20:05 by nbouhali          #+#    #+#             */
/*   Updated: 2023/04/08 17:46:51 by nbouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	errors(t_heck *checks, t_stack *stack, int code)
{
	write(2, "Error\n", 6);
	if (code == 2)
	{
		freeingmachine(checks->tableau, NULL, NULL, NULL, stack->size);
		freeingmachine(NULL, checks->copy, NULL, NULL, 0);
		freeingmachine(NULL, NULL, checks, NULL, 0);
		freeingmachine(NULL, stack->arr, NULL, stack, 0);
	}
	if (code == 3)
		freeingmachine(NULL, stack->arr, NULL, stack, 0);
	exit(1);
}
int	allspaces(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}
void	freeingmachine(char **tableau, void *ptr, t_heck *checks,
		t_stack *stack, int size)
{
	int	i;

	i = 0;
	if (tableau)
	{
		while (i < size)
		{
			free(tableau[i]);
			i++;
		}
		free(tableau);
	}
	if (ptr)
		free(ptr);
	if (checks)
	{
		free(checks);
	}
	if (stack)
	{
		free(stack);
	}
}

void	errorssghar(t_heck *checks, int size)
{
	int i = 0;

	while (i < size)
	{
		free(checks->tableau[i]);
		i++;
	}
	free(checks->tableau);
	free(checks);
	write(2, "Error\n", 6);
	exit(1);
}