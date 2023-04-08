/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructionsrotate.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali < nbouhali@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 18:10:47 by nbouhali          #+#    #+#             */
/*   Updated: 2023/04/08 18:10:48 by nbouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *stacka, t_stack *stackb)
{
	rotator(stacka);
	ft_printf("ra\n");
}
void	rb(t_stack *stacka, t_stack *stackb)
{
	rotator(stackb);
	ft_printf("rb\n");
}
void	rr(t_stack *stacka, t_stack *stackb)
{
	rotator(stacka);
	rotator(stackb);
	ft_printf("rr\n");
}
void	rra(t_stack *stacka, t_stack *stackb)
{
	reverserotator(stacka);
	ft_printf("rra\n");
}
void	rrb(t_stack *stacka, t_stack *stackb)
{
	reverserotator(stackb);

	ft_printf("rrb\n");
}