/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali < nbouhali@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 18:11:00 by nbouhali          #+#    #+#             */
/*   Updated: 2023/04/08 18:11:01 by nbouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sortdial3(t_stack *stacka, t_stack *stackb)
{
	if (stacka->arr[0] == stacka->arr[stacka->fogani - 1] - 1
		|| stacka->arr[stacka->fogani - 1] == stacka->arr[stacka->fogani] - 1)
	{
		sa(stacka, stackb);
	}
	if (stacka->arr[0] > stacka->arr[stacka->fogani - 1]
		&& stacka->arr[0] < stacka->arr[stacka->fogani])
		ra(stacka, stackb);
	if (stacka->arr[stacka->fogani] < stacka->arr[stacka->fogani - 1]
		&& stacka->arr[stacka->fogani] > stacka->arr[0])
		rra(stacka, stackb);
}
void	sortdial5(t_stack *stacka, t_stack *stackb)
{
	while (findsmallest(stacka->arr[stacka->fogani], stacka) == 0)
	{
		if (sorteddescending(stacka) == 0)
		{
			rra(stacka, stackb);
		}
		else
			ra(stacka, stackb);
	}
	pb(stacka, stackb);
	while (findsmallest(stacka->arr[stacka->fogani], stacka) == 0)
	{
		if (sorteddescending(stacka) == 0)
		{
			rra(stacka, stackb);
		}
		else
			ra(stacka, stackb);
	}
	pb(stacka, stackb);
	if (stacka->fogani == 2)
		sortdial3(stacka, stackb);
	pa(stacka, stackb);
	pa(stacka, stackb);
}
void	sortdial4(t_stack *stacka, t_stack *stackb)
{
	while (findsmallest(stacka->arr[stacka->fogani], stacka) == 0)
	{
		if (sortedascending(stacka) == 0)
		{
			rra(stacka, stackb);
		}
		else
			ra(stacka, stackb);
	}
	pb(stacka, stackb);
	if (stacka->fogani == 2)
		sortdial3(stacka, stackb);
	pa(stacka, stackb);
}
void	sortdial2(t_stack *stacka, t_stack *stackb)
{
	if (stacka->arr[0] < stacka->arr[1])
		sa(stacka, stackb);
}
void	alreadysorted(t_stack *stacka, t_stack *stackb)
{
	while (stacka->fogani + 1)
	{
		pb(stacka, stackb);
	}
	while (stackb->fogani + 1)
	{
		rrb(stacka, stackb);
		pa(stacka, stackb);
	}
}