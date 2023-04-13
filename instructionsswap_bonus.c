/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructionsswap_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali < nbouhali@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 18:10:50 by nbouhali          #+#    #+#             */
/*   Updated: 2023/04/13 02:44:10 by nbouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	sa(t_stack *stacka, t_stack *stackb)
{
	if (stacka->fogani >= 1)
		swapper(&stacka->arr[stacka->fogani - 1], &stacka->arr[stacka->fogani]);
}

void	sb(t_stack *stacka, t_stack *stackb)
{
	if (stackb->fogani >= 1)
		swapper(&stackb->arr[stackb->fogani - 1], &stackb->arr[stackb->fogani]);
}

void	ss(t_stack *stacka, t_stack *stackb)
{
	if (stacka->fogani >= 1 && stackb->fogani >= 1)
	{
		swapper(&stacka->arr[stacka->fogani - 1], &stacka->arr[stacka->fogani]);
		swapper(&stackb->arr[stackb->fogani - 1], &stackb->arr[stackb->fogani]);
	}
}
