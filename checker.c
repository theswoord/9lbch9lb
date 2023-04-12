/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali < nbouhali@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 16:19:58 by nbouhali          #+#    #+#             */
/*   Updated: 2023/04/12 06:42:42 by nbouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	digitizer(t_heck *checks, t_stack *stack, t_stack *stackb)
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
						errorsfinal(checks, stack, stackb, DIGITIZER);
					if (j != 1 && ft_isdigit(checks->tableau[i][j - 2]))
					{
						errorsfinal(checks, stack, stackb, DIGITIZER);
					}
				}
			}
			else
				errorsfinal(checks, stack, stackb, DIGITIZER);
			j++;
		}
		j = 0;
		i++;
	}
}

void	saisie(t_heck *checks, t_stack *stack, t_stack *stackb)
{
	int	i;
	int	j;

	i = 0;
	stack->fogani = stack->size - 1;
	j = stack->size - 1;
	while (checks->tableau[i])
	{
		if (ft_strlen(checks->tableau[i]) > 14)
			errorsfinal(checks, stack, stackb, SAISIE);
		if (ft_latoi(checks->tableau[i]) > 2147483647)
			errorsfinal(checks, stack, stackb, SAISIE);
		if (ft_latoi(checks->tableau[i]) < -2147483648)
			errorsfinal(checks, stack, stackb, SAISIE);
		stack->arr[i] = ft_atoi(checks->tableau[j]);
		checks->copy[i] = ft_atoi(checks->tableau[j]);
		j--;
		i++;
	}
}

void	duplicata(t_stack *stack, t_stack *stackb, t_heck *checks)
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
				errorsfinal(checks, stack, stackb, DUPLICATE);
			j++;
		}
		i++;
		j = i + 1;
	}
}

void	twodstrlen(t_heck *checks)
{
	int	i;

	i = 0;
	while (checks->tableau[i])
	{
		checks->tableauindex++;
		i++;
	}
}
