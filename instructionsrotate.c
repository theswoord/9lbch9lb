#include "push_swap.h"

void ra(t_stack *stacka, t_stack *stackb){

    rotator(stacka);
    // swapper( )
    ft_printf("ra\n");
}
void rb(t_stack *stacka, t_stack *stackb){


    rotator(stackb);
    ft_printf("rb\n");
}
void rr(t_stack *stacka, t_stack *stackb){

        rotator(stacka);
        rotator(stackb);


    ft_printf("rr\n");
}
void rra(t_stack *stacka, t_stack *stackb){

    reverserotator(stacka);
    ft_printf("rra\n");
}
void rrb(t_stack *stacka, t_stack *stackb){

    reverserotator(stackb);

    ft_printf("rrb\n");
}