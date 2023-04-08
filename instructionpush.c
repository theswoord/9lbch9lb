#include "push_swap.h"


void pa(t_stack *stacka, t_stack *stackb){

     push(stacka,stackb->arr[stackb->fogani]);
    pop(stackb);
    ft_printf("pa\n");
}
void pb(t_stack *stacka, t_stack *stackb){

    push(stackb,stacka->arr[stacka->fogani]);
    pop(stacka);

    ft_printf("pb\n");
}
void rrr(t_stack *stacka, t_stack *stackb){

    reverserotator(stacka);
    reverserotator(stackb);

    ft_printf("rrr\n");
}