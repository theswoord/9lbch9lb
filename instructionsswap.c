/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructionsswap.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali < nbouhali@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 18:10:50 by nbouhali          #+#    #+#             */
/*   Updated: 2023/04/12 02:26:32 by nbouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stacka, t_stack *stackb)
{
	if (stacka->fogani >= 1)
		swapper(&stacka->arr[stacka->fogani - 1], &stacka->arr[stacka->fogani]);
	ft_printf("sa\n");
}

void	sb(t_stack *stacka, t_stack *stackb)
{
	if (stackb->fogani >= 1)
		swapper(&stackb->arr[stackb->fogani - 1], &stackb->arr[stackb->fogani]);
	ft_printf("sb\n");
}

void	ss(t_stack *stacka, t_stack *stackb)
{
	if (stacka->fogani >= 1 && stackb->fogani >= 1)
	{
		swapper(&stacka->arr[stacka->fogani - 1], &stacka->arr[stacka->fogani]);
		swapper(&stackb->arr[stackb->fogani - 1], &stackb->arr[stackb->fogani]);
		ft_printf("ss\n");
	}
}
