/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali < nbouhali@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 16:19:58 by nbouhali          #+#    #+#             */
/*   Updated: 2023/04/08 18:10:14 by nbouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	digitizer(t_heck *checks, t_stack *stack)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (checks->tableau[i])
	{
		stack->size++;
		while (checks->tableau[i][j])
		{
			if (ft_isdigit(checks->tableau[i][j])
				|| checks->tableau[i][j] == '+' || checks->tableau[i][j] == '-')
			{
				if (checks->tableau[i][j] == '+'
					|| checks->tableau[i][j] == '-')
				{
					j++;
					if (!ft_isdigit(checks->tableau[i][j]))
						errorssghar(checks, checks->tableauindex);
					if (j != 1 && ft_isdigit(checks->tableau[i][j - 2]))
						errorssghar(checks, checks->tableauindex);
				}
			}
			else
				errorssghar(checks, checks->tableauindex);
			j++;
		}
		j = 0;
		i++;
	}
}

void	saisie(t_heck *checks, t_stack *stack)
{
	int	i;
	int	j;

	i = 0;
	stack->fogani = stack->size - 1;
	j = stack->size - 1;
	while (checks->tableau[i])
	{
		if (ft_strlen(checks->tableau[i]) > 10)
		{
			errors(checks, stack, 2);
		}
		if (ft_latoi(checks->tableau[i]) > 2147483647)
			errors(checks, stack, 2);
		if (ft_latoi(checks->tableau[i]) < -2147483648)
			errors(checks, stack, 2);
		stack->arr[i] = ft_atoi(checks->tableau[j]);
		checks->copy[i] = ft_atoi(checks->tableau[j]);
		j--;
		i++;
	}
}

void	duplicata(t_stack *stack)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < stack->size)
	{
		while (j < stack->size)
		{
			if (stack->arr[i] == stack->arr[j])
			{
				freeingmachine(NULL, stack->arr, NULL, stack, 0);
				errors(NULL, NULL, 0);
			}
			j++;
		}
		i++;
		j = i + 1;
	}
}

void	twodstrlen(t_heck *checks)
{
	int i = 0;
	while (checks->tableau[i])
	{
		checks->tableauindex++;
		i++;
	}
}