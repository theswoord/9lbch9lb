#include "push_swap.h"
#include <stdio.h>
int main (int ac , char** av){
    int test =0;
    
// t_heck	*pusw;    
t_stack *stacka;
t_stack *stackb;
t_heck *checks;

stacka = (t_stack*)malloc(sizeof(t_stack));

// stackb = (t_b*)malloc(sizeof(t_b));
checks = (t_heck*)malloc(sizeof(t_heck));

// ft_memset(stacka,0,sizeof(t_stack));
// ft_memset(stackb,0,sizeof(t_b));
checks->strtwil = kassama(ac , av );
digitizer(checks ,stacka);
for (size_t d = 0; d < 6; d++)
{
        ft_printf("arr %d\n",stacka->arr[d] );

    /* code */
}
// while (1)
// {
//     /* code */
// }

// printf("%s",checks->strtwil);

// splitter(pusw , av);
}

char *kassama(int ac,char **av ){

int i = 1;
char* ster =malloc(1);

while(i < ac){
ster = ft_strjoingnl(ster,av[i]);
// printf("|%s|\n",ster);
i++;
ster = ft_strjoingnl(ster," ");



}
return(ster);

}