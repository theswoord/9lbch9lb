/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali < nbouhali@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 04:00:56 by nbouhali          #+#    #+#             */
/*   Updated: 2023/04/14 20:13:07 by nbouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../gnl/get_next_line.h"
# include "../libft/libft.h"
# include "../printf/ft_printf.h"
# include <unistd.h>
# include <stdlib.h>

enum
{
	DUPLICATE = 1,
	FIRSTCHECK = 2,
	SAISIE = 3,
	BONUS = 4,
	DIGITIZER = 5,
	CHECKS = 6,
	END = 7,
	SORTED = 8,
	TABLEAU = 1,
	STACKA = 2,
	STACKB = 3,
	FREEALL = 4,
	ONLYA = 5,
	ONLYB = 6,
	ONLYS = 7,
	ONLYARR = 8,
	ONLYSTACK = 9,
};

typedef struct s_stack
{
	int		fogani;
	int		size;
	int		*arr;
}			t_stack;

typedef struct S_heck
{
	char	*strtwil;
	char	**tableau;
	int		tableauindex;
	int		salit;
}			t_heck;

char		*kassama(int ac, char **av);
void		digitizer(t_heck *checks, t_stack *stack, t_stack *stackb);
void		saisie(t_heck *checks, t_stack *stack, t_stack *stackb);
void		duplicata(t_stack *stack, t_stack *stackb, t_heck *checks);
long		ft_latoi(const char *str);
void		allocator(t_stack *stacka, t_stack *stackb, t_heck *checks);
int			allspaces(char *str);
void		swapper(int *p1, int *p2);
void		rotator(t_stack *stack);
void		reverserotator(t_stack *stack);
void		sa(t_stack *stacka, t_stack *stackb);
void		sb(t_stack *stacka, t_stack *stackb);
void		ss(t_stack *stacka, t_stack *stackb);
void		pa(t_stack *stacka, t_stack *stackb);
void		pb(t_stack *stacka, t_stack *stackb);
void		rrr(t_stack *stacka, t_stack *stackb);
void		ra(t_stack *stacka, t_stack *stackb);
void		rb(t_stack *stacka, t_stack *stackb);
void		rr(t_stack *stacka, t_stack *stackb);
void		rra(t_stack *stacka, t_stack *stackb);
void		rrb(t_stack *stacka, t_stack *stackb);
int			khawi(t_stack *stack);
int			aamr(t_stack *stack);
void		push(t_stack *stack, int intiger);
void		pop(t_stack *stack);
int			sortedascending(t_stack *stacka);
void		twodstrlen(t_heck *checks);
void		freemachine(t_heck *checks, t_stack *stacka, t_stack *stackb,
				int code);
void		freemachinegeneral(t_heck *checks, t_stack *stacka, t_stack *stackb,
				int code);
void		errorsfinal(t_heck *checks, t_stack *stacka, t_stack *stackb,
				int code);
void		cleanfree(t_heck *checks, t_stack *stacka, t_stack *stackb,
				int code);
int			basic_tests(t_heck *checks, int *i, int *j);
void		handler(t_heck *checks, char *str,
				t_stack *stacka, t_stack *stackb);
void		catchinginstructor(char *instructions, t_heck *checks,
				t_stack *stacka, t_stack *stackb);
int			zerofree(char *str);
void		errorchecker(t_heck *checks, t_stack *stacka,
				t_stack *stackb, int code);
#endif
