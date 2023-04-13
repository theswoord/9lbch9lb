/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructionsrotate_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali < nbouhali@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 18:10:47 by nbouhali          #+#    #+#             */
/*   Updated: 2023/04/13 02:44:20 by nbouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ra(t_stack *stacka, t_stack *stackb)
{
	rotator(stacka);
}

void	rb(t_stack *stacka, t_stack *stackb)
{
	rotator(stackb);
}

void	rr(t_stack *stacka, t_stack *stackb)
{
	rotator(stacka);
	rotator(stackb);
}

void	rra(t_stack *stacka, t_stack *stackb)
{
	reverserotator(stacka);
}

void	rrb(t_stack *stacka, t_stack *stackb)
{
	reverserotator(stackb);
}
