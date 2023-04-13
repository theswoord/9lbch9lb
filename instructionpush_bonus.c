/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructionpush_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali < nbouhali@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 18:10:40 by nbouhali          #+#    #+#             */
/*   Updated: 2023/04/13 02:44:27 by nbouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	pa(t_stack *stacka, t_stack *stackb)
{
	push(stacka, stackb->arr[stackb->fogani]);
	pop(stackb);
}

void	pb(t_stack *stacka, t_stack *stackb)
{
	push(stackb, stacka->arr[stacka->fogani]);
	pop(stacka);
}

void	rrr(t_stack *stacka, t_stack *stackb)
{
	reverserotator(stacka);
	reverserotator(stackb);
}
