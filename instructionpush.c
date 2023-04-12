/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructionpush.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali < nbouhali@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 18:10:40 by nbouhali          #+#    #+#             */
/*   Updated: 2023/04/12 02:25:40 by nbouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *stacka, t_stack *stackb)
{
	push(stacka, stackb->arr[stackb->fogani]);
	pop(stackb);
	ft_printf("pa\n");
}

void	pb(t_stack *stacka, t_stack *stackb)
{
	push(stackb, stacka->arr[stacka->fogani]);
	pop(stacka);
	ft_printf("pb\n");
}

void	rrr(t_stack *stacka, t_stack *stackb)
{
	reverserotator(stacka);
	reverserotator(stackb);
	ft_printf("rrr\n");
}
