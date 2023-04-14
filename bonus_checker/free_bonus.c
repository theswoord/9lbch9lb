/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali < nbouhali@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 02:30:56 by nbouhali          #+#    #+#             */
/*   Updated: 2023/04/14 17:59:26 by nbouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"checker.h"

void	freemachine(t_heck *checks, t_stack *stacka, t_stack *stackb, int code)
{
	int	i;

	if (code == TABLEAU)
	{
		i = 0;
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
	if (code == FREEALL)
	{
		free(stacka->arr);
		free(stacka);
		free(stackb->arr);
		free(stackb);
	}
}

void	freemachinegeneral(t_heck *checks, t_stack *stacka, t_stack *stackb,
		int code)
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

void	errorsfinal(t_heck *checks, t_stack *stacka, t_stack *stackb, int code)
{
	if (code == DIGITIZER)
	{
		freemachine(checks, stacka, stackb, TABLEAU);
		freemachinegeneral(checks, stacka, stackb, ONLYSTACK);
		free(checks);
	}
	if (code == SORT)
		freemachine(checks, stacka, stackb, FREEALL);
	if (code == SAISIE)
	{
		freemachine(checks, stacka, stackb, TABLEAU);
		freemachine(checks, stacka, stackb, STACKA);
		freemachinegeneral(checks, stacka, stackb, ONLYB);
		free(checks->copy);
		free(checks);
	}
	if (code == DUPLICATE)
	{
		freemachine(checks, stacka, stackb, STACKA);
		freemachinegeneral(checks, stacka, stackb, ONLYB);
		free(checks->copy);
		free(checks);
	}
	write(2, "Error\n", 6);
	exit(1);
}

void	cleanfree(t_heck *checks, t_stack *stacka, t_stack *stackb, int code)
{
	if (code == CHECKS)
	{
		free(checks->copy);
		free(checks);
	}
	if (code == END)
		freemachine(checks, stacka, stackb, FREEALL);
	if (code == SORTED)
	{
		freemachine(checks, stacka, stackb, STACKA);
		freemachinegeneral(checks, stacka, stackb, ONLYB);
		free(checks->copy);
		free(checks);
	}
}
