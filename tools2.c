/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali < nbouhali@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 18:11:05 by nbouhali          #+#    #+#             */
/*   Updated: 2023/04/12 02:40:40 by nbouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rangefinder(int size)
{
	int		y;
	float	fassila;

	fassila = 0.03;
	y = fassila * size + 12;
	return (y);
}

int	sorteddescending(t_stack *stacka)
{
	int	i;
	int	result;

	result = 0;
	i = 0;
	while (i < stacka->fogani)
	{
		if (stacka->arr[i] > stacka->arr[i + 1])
		{
			result = 1;
		}
		i++;
	}
	return (result);
}

int	findsmallest(int number, t_stack *stack)
{
	int	i;
	int	bigger;

	i = 0;
	bigger = stack->arr[0];
	while (i <= stack->fogani)
	{
		if (bigger > stack->arr[i])
			bigger = stack->arr[i];
		i++;
	}
	return (bigger == number);
}

int	sortedascending(t_stack *stacka)
{
	int	i;
	int	result;

	result = 0;
	i = 0;
	while (i < stacka->fogani)
	{
		if (stacka->arr[i] < stacka->arr[i + 1])
		{
			result = 1;
		}
		i++;
	}
	return (result);
}
