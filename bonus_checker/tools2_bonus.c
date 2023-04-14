/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools2_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali < nbouhali@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 18:11:05 by nbouhali          #+#    #+#             */
/*   Updated: 2023/04/14 20:13:20 by nbouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	sorteddescending(t_stack *stacka)
{
	int	i;
	int	result;

	result = 0;
	i = 0;
	while (i < stacka->fogani)
	{
		if (stacka->arr[i] > stacka->arr[i + 1])
		{
			result = 1;
		}
		i++;
	}
	return (result);
}

int	sortedascending(t_stack *stacka)
{
	int	i;
	int	result;

	result = 0;
	i = 0;
	while (i < stacka->fogani)
	{
		if (stacka->arr[i] < stacka->arr[i + 1])
		{
			result = 1;
		}
		i++;
	}
	return (result);
}
