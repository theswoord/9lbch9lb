/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali < nbouhali@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 02:30:57 by nbouhali          #+#    #+#             */
/*   Updated: 2023/04/14 04:06:07 by nbouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int ac, char **av)
{
	t_stack	*stacka;
	t_stack	*stackb;
	t_heck	*checks;
	char	*instructions;

	if (ac < 2)
		exit(0);
	stacka = (t_stack *)malloc(sizeof(t_stack));
	stackb = (t_stack *)malloc(sizeof(t_stack));
	checks = (t_heck *)malloc(sizeof(t_heck));
	checks->strtwil = kassama(ac, av);
	checks->tableau = ft_split(checks->strtwil, ' ');
	free(checks->strtwil);
	digitizer(checks, stacka, stackb);
	allocator(stacka, stackb, checks);
	saisie(checks, stacka, stackb);
	freemachine(checks, stacka, stackb, TABLEAU);
	duplicata(stacka, stackb, checks);
	stackb->arr = malloc(sizeof(int) * stacka->size);
	catchinginstructor(instructions, checks, stacka, stackb);
	cleanfree(NULL, stacka, stackb, END);
}

void	handler(char *str, t_stack *stacka, t_stack *stackb)
{
	if (ft_strncmp(str, "sa\n", 3) == 0)
		sa(stacka, stackb);
	else if (ft_strncmp(str, "sb\n", 3) == 0)
		sb(stacka, stackb);
	else if (ft_strncmp(str, "pb\n", 3) == 0)
		pb(stacka, stackb);
	else if (ft_strncmp(str, "ss\n", 3) == 0)
		ss(stacka, stackb);
	else if (ft_strncmp(str, "ra\n", 3) == 0)
		ra(stacka, stackb);
	else if (ft_strncmp(str, "rb\n", 3) == 0)
		rb(stacka, stackb);
	else if (ft_strncmp(str, "pa\n", 3) == 0)
		pa(stacka, stackb);
	else if (ft_strncmp(str, "rr\n", 3) == 0)
		rr(stacka, stackb);
	else if (ft_strncmp(str, "rra\n", 4) == 0)
		rra(stacka, stackb);
	else if (ft_strncmp(str, "rrb\n", 4) == 0)
		rrb(stacka, stackb);
	else if (ft_strncmp(str, "rrr\n", 4) == 0)
		rrr(stacka, stackb);
	else
		errorsfinal(NULL, stacka, stackb, END);
}

void	catchinginstructor(char *instructions, t_heck *checks, t_stack *stacka,
		t_stack *stackb)
{
	while (1)
	{
		instructions = get_next_line(0);
		if (!instructions)
		{
			checks->salit = 1;
			free(instructions);
			break ;
		}
		handler(instructions, stacka, stackb);
		free(instructions);
	}
	if (checks->salit == 1)
	{
		if (sortedascending(stacka) == 0 && stacka->fogani == stacka->size - 1)
			write(1, "OK\n", 3);
		else
			write(1, "KO\n", 3);
	}
}
