/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali < nbouhali@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 18:11:11 by nbouhali          #+#    #+#             */
/*   Updated: 2023/04/13 02:32:53 by nbouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	swapper(int *p1, int *p2)
{
	int	temp;

	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void	rotator(t_stack *stack)
{
	int	temp;
	int	i;

	i = stack->fogani;
	temp = stack->arr[stack->fogani];
	while (i >= 1)
	{
		stack->arr[i] = stack->arr[i - 1];
		i--;
	}
	stack->arr[0] = temp;
}

void	backsort(t_stack *stack, t_heck *checks)
{
	int	i;
	int	mynum;
	int	a;

	i = 1;
	a = 0;
	while (i < stack->size)
	{
		mynum = checks->copy[i];
		a = i - 1;
		while (a >= 0 && checks->copy[a] < mynum)
		{
			checks->copy[a + 1] = checks->copy[a];
			a--;
		}
		checks->copy[a + 1] = mynum;
		i++;
	}
}

void	allocator(t_stack *stacka, t_stack *stackb, t_heck *checks)
{
	stacka->arr = malloc(sizeof(int) * stacka->size);
	checks->copy = malloc(sizeof(int) * stacka->size);
	stackb->size = stacka->size;
	stackb->fogani = -1;
}

void	indicekeeper(t_stack *stacka, t_heck *checks)
{
	int	i;
	int	j;

	i = 0;
	while (i < stacka->size)
	{
		j = 0;
		while (j < stacka->size)
		{
			if (stacka->arr[i] == checks->copy[j])
			{
				stacka->arr[i] = stacka->fogani - j;
				j = stacka->size;
			}
			j++;
		}
		i++;
	}
}
