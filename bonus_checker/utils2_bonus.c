/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali < nbouhali@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 18:11:11 by nbouhali          #+#    #+#             */
/*   Updated: 2023/04/14 20:02:32 by nbouhali         ###   ########.fr       */
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

void	allocator(t_stack *stacka, t_stack *stackb, t_heck *checks)
{
	stacka->arr = malloc(sizeof(int) * stacka->size);
	stackb->size = stacka->size;
	stackb->fogani = -1;
}
