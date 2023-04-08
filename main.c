/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali < nbouhali@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 17:26:56 by nbouhali          #+#    #+#             */
/*   Updated: 2023/04/08 17:46:13 by nbouhali         ###   ########.fr       */
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
	twodstrlen(checks);
	digitizer(checks, stacka);
	allocator(stacka, stackb, checks);
	saisie(checks, stacka);
	freeingmachine(checks->tableau, NULL, NULL, NULL, checks->tableauindex);
	duplicata(stacka);
	backsort(stacka, checks);
	indicekeeper(stacka, checks);
	freeingmachine(NULL, checks->copy, NULL, NULL, 0);
	freeingmachine(NULL, NULL, checks, NULL, 0);
	instructor(stacka, stackb);
	freeingmachine(NULL, stacka->arr, NULL, stacka, 0);
	freeingmachine(NULL, stackb->arr, NULL, stackb, 0);
}

char	*kassama(int ac, char **av)
{
	int i = 1;
	char *ster;
	ster = malloc(1);
	while (i < ac)
	{
		if (allspaces(av[i]) == 1)
			errors(NULL, NULL, 0);

		ster = ft_strjoingnl(ster, av[i]);
		i++;
		ster = ft_strjoingnl(ster, " ");
	}
	return (ster);
}