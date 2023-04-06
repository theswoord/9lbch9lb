#include "push_swap.h"
#include <stdio.h>
int main(int ac, char **av)
{
    // int test = 0;

    t_stack *stacka;
    t_stack *stackb;
    t_heck *checks;
    

    stacka = (t_stack *)malloc(sizeof(t_stack));
    stackb = (t_stack *)malloc(sizeof(t_stack));

    checks = (t_heck *)malloc(sizeof(t_heck));

    // stackb = (t_b*)malloc(sizeof(t_b));

    // ft_memset(stacka,0,sizeof(t_stack));
    // ft_memset(stackb,0,sizeof(t_stack));

    // ft_memset(stackb,0,sizeof(t_b));
    checks->strtwil = kassama(ac, av);
    // ft_printf("%s\n",checks->strtwil);

    // stacka->arr = malloc(100*4);
    // ft_printf("ster twil :%s\n",checks->strtwil);
    checks->tableau = ft_split(checks->strtwil,' ');
    digitizer(checks, stacka);
    allocator(stacka,stackb,checks);

    saisie(checks,stacka);
    duplicata(stacka);
    backsort(stacka, checks);
	indicekeeper(stacka,checks);
    // printer(stacka,stackb,checks);

    instructor(stacka,stackb);

    
    // printer(stacka,stackb,checks);
    // printz(stacka,stackb);
    // for (size_t d = 0; d < 11; d++)
    // {
    //   ft_printf("splited [%d] %s\n",d, checks->tableau[d]);
    //     ft_printf("array [%d] %d\n",d, stacka->arr[d]);
    // }
}

char *kassama(int ac, char **av)
{

    int i = 1;
    char *ster;
    ster =malloc(1);
    while (i < ac)
    {
        if(allspaces(av[i])==1)
            errors();
        
        ster = ft_strjoingnl(ster, av[i]);
        i++;
        // if(ft_strrchr(ster,' ') && !ft_strchr(ster,' '))
        ster = ft_strjoingnl(ster, " ");
    }
    return (ster);
}