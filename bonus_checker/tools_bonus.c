/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali < nbouhali@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 17:53:38 by nbouhali          #+#    #+#             */
/*   Updated: 2023/04/14 20:13:49 by nbouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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

int	basic_tests(t_heck *checks, int *i, int *j)
{
	if (ft_isdigit(checks->tableau[*i][*j]) || checks->tableau[*i][*j] == '+'
		|| checks->tableau[*i][*j] == '-')
	{
		if (checks->tableau[*i][*j] == '+' || checks->tableau[*i][*j] == '-')
		{
			*j = *j + 1;
			if (!ft_isdigit(checks->tableau[*i][*j]))
				return (1);
			if (*j != 1 && ft_isdigit(checks->tableau[*i][*j - 2]))
				return (1);
		}
	}
	else
		return (1);
	return (9);
}

char	*kassama(int ac, char **av)
{
	int		i;
	char	*ster;

	i = 1;
	ster = malloc(1);
	while (i < ac)
	{
		if (allspaces(av[i]) == 1)
			errorsfinal(NULL, NULL, NULL, 0);
		ster = ft_strjoingnl(ster, av[i]);
		i++;
		ster = ft_strjoingnl(ster, " ");
	}
	return (ster);
}
