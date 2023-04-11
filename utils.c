/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali < nbouhali@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 16:19:53 by nbouhali          #+#    #+#             */
/*   Updated: 2023/04/11 20:54:01 by nbouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	instructor(t_stack *stacka, t_stack *stackb)
{
	int	ranger;
	int	range;
	int	kbir;
	int	finkayn;

	stackb->arr = malloc(sizeof(int) * stacka->size);
	if (stacka->size == 2)
		sortdial2(stacka, stackb);
	else if (stacka->size == 3)
		sortdial3(stacka, stackb);
	else if (stacka->size == 4)
		sortdial4(stacka, stackb);
	else if (stacka->size == 5)
		sortdial5(stacka, stackb);
	else if (sorteddescending(stacka) == 0)
		alreadysorted(stacka, stackb);
	else if (stacka->size > 5)
	{
		ranger = 0;
		range = rangefinder(stacka->size);
		kbir = stacka->fogani;
		while (stacka->fogani + 1)
		{
			if (stacka->arr[stacka->fogani] <= ranger)
			{
				pb(stacka, stackb);
				rb(stacka, stackb);
				ranger++;
			}
			else if (stacka->arr[stacka->fogani] <= ranger + range)
			{
				pb(stacka, stackb);
				ranger++;
			}
			else
				ra(stacka, stackb);
		}
		while (stackb->fogani + 1)
		{
			finkayn = chkonbiggest(stackb);
			while (stackb->arr[stackb->fogani] != kbir)
			{
				if (finkayn > stackb->fogani / 2)
					rb(stacka, stackb);
				else
					rrb(stacka, stackb);
			}
			pa(stacka, stackb);
			kbir--;
		}
	}
}
