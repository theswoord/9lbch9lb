/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali < nbouhali@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 17:26:56 by nbouhali          #+#    #+#             */
/*   Updated: 2023/04/11 20:47:50 by nbouhali         ###   ########.fr       */
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
	digitizer(checks, stacka,stackb);
	allocator(stacka, stackb, checks);
	saisie(checks, stacka,stackb); // nedem checks copy
	freemachine(checks,stacka,stackb,TABLEAU);

	
	if (sortedascending(stacka) == 0){
		cleanfree(checks,stacka,stackb,SORTED);
		exit(0);
	} // matnsach tfree 
	// freeingmachine(checks->tableau, NULL, NULL, NULL, checks->tableauindex);
	duplicata(stacka,stackb,checks);
	backsort(stacka, checks);
	indicekeeper(stacka, checks);
	cleanfree(checks,stacka,stackb,CHECKS);
	// freeingmachine(NULL, checks->copy, NULL, NULL, 0);
	// freeingmachine(NULL, NULL, checks, NULL, 0);
	
	
	instructor(stacka, stackb);
	cleanfree(checks,stacka,stackb,END);

	
	// freeingmachine(NULL, stacka->arr, NULL, stacka, 0);
	// freeingmachine(NULL, stackb->arr, NULL, stackb, 0);
}

char	*kassama(int ac, char **av)
{
	int i = 1;
	char *ster;
	ster = malloc(1);
	while (i < ac)
	{
		if (allspaces(av[i]) == 1)
			errorsFinal(NULL,NULL,NULL,0);

		ster = ft_strjoingnl(ster, av[i]);
		i++;
		ster = ft_strjoingnl(ster, " ");
	}
	return (ster);
}

void freemachine(t_heck *checks, t_stack *stacka, t_stack *stackb, int code)
{

	if (code == TABLEAU)
	{
		int i = 0;
		while (i < checks->tableauindex)
		{
			free(checks->tableau[i]);
			i++;
		}
		free(checks->tableau);
	}
	if (code == STACKA)
	{

		free(stacka->arr);
		free(stacka);
	}
	if (code == STACKB)
	{
		free(stackb->arr);
		free(stackb);
	}
	if (code == FREEALL)
	{
		free(stacka->arr);
		free(stacka);
		free(stackb->arr);
		free(stackb);
	}
}
void freemachinegeneral(t_heck *checks, t_stack *stacka, t_stack *stackb, int code)
{

	if (code == ONLYS)
	{
		free(stacka);
		free(stackb);
		free(checks);
	}
	if (code == ONLYA)
		free(stacka);
	if (code == ONLYB)
		free(stackb);
	if (code == ONLYARR)
	{
		free(stacka->arr);
		free(stackb->arr);
	}
	if (code == ONLYSTACK)
	{
		free(stacka);
		free(stackb);
	}
}
void errorsFinal(t_heck *checks, t_stack *stacka, t_stack *stackb, int code){

	if (code == DIGITIZER){
	freemachine(checks,stacka,stackb,TABLEAU);
	freemachinegeneral(checks,stacka,stackb,ONLYSTACK);
	free(checks);
	}
	if (code == SORT)
		freemachine(checks,stacka,stackb,FREEALL);
	if (code == SAISIE)
	{
		freemachine(checks,stacka,stackb,TABLEAU);
		freemachine(checks,stacka,stackb,STACKA);
		freemachinegeneral(checks,stacka,stackb,ONLYB);
			free(checks->copy);
			free(checks);


	}
	if (code == DUPLICATE)
	{
	freemachine(checks,stacka,stackb,STACKA);
	freemachinegeneral(checks,stacka,stackb,ONLYB);
	free(checks->copy);
			free(checks);
	}
	
	
	write(2, "Error\n", 6);
	exit(1);
}

void cleanfree(t_heck *checks, t_stack *stacka, t_stack *stackb, int code){

	if (code == CHECKS)
	{
			// freemachine(checks,stacka,stackb,TABLEAU);
			// free(checks.)
			free(checks->copy);
			
			free(checks);
	}
	if (code == END)
		freemachine(checks,stacka,stackb,FREEALL);
	
	if (code == SORTED)
	{
		freemachine(checks,stacka,stackb,STACKA);
		freemachinegeneral(checks,stacka,stackb,ONLYB);
		free(checks->copy);
		free(checks);
			// freemachine(checks,stacka,stackb,TABLEAU);
		
		/* code */
	}
	
	
	
}