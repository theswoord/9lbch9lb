/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali < nbouhali@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 17:26:56 by nbouhali          #+#    #+#             */
/*   Updated: 2023/04/13 03:03:26 by nbouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*stacka;
	t_stack	*stackb;
	t_heck	*checks;

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
	if (sortedascending(stacka) == 0)
	{
		cleanfree(checks, stacka, stackb, SORTED);
		exit(0);
	}
	duplicata(stacka, stackb, checks);
	backsort(stacka, checks);
	indicekeeper(stacka, checks);
	cleanfree(checks, stacka, stackb, CHECKS);
	instructor(stacka, stackb);
	cleanfree(checks, stacka, stackb, END);
}
