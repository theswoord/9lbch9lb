/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali < nbouhali@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 17:53:38 by nbouhali          #+#    #+#             */
/*   Updated: 2023/04/11 20:53:27 by nbouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_latoi(const char *str)
{
	int		b;
	int		ichara;
	long	l7asol;

	b = 0;
	ichara = 1;
	l7asol = 0;
	while ((str[b] >= 9 && str[b] <= 13) || str[b] == 32)
	{
		b++;
	}
	if (str[b] == '-' || str[b] == '+')
	{
		if (str[b] == '-')
			ichara *= -1;
		b++;
	}
	while (str[b] >= '0' && str[b] <= '9')
	{
		l7asol *= 10;
		l7asol += str[b] - '0';
		b++;
	}
	return (l7asol * ichara);
}
int	chkonbiggest(t_stack *stack)
{
	int	i;
	int	big;
	int	max_index;

	i = 0;
	big = stack->arr[0];
	max_index = 0;
	while (i <= stack->fogani)
	{
		if (big < stack->arr[i])
		{
			big = stack->arr[i];
			max_index = i;
		}
		i++;
	}
	return (max_index);
}
int	finkayninrange(t_stack *stack, int start, int finish, int number)
{
	int	i;

	i = start;
	while (i > finish && i <= start)
	{
		if (number >= stack->arr[i])
			return (1);
		if (number <= stack->arr[i])
			return (-1);
		i--;
	}
	return (0);
}
