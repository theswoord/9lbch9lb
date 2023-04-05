#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H
#include "./libft/libft.h"
#include "./gnl/get_next_line.h"
#include "./printf/ft_printf.h"
#include <limits.h>

typedef struct s_stack
{
int fogani;
int size;
int *arr;
}t_stack;

typedef struct S_heck{
char *strtwil;
char **tableau;
int *copy;
// int *indexes;

}t_heck;

void splitter(t_heck *pusw, char **av);
char* kassama(int ac,char **av);
void digitizer(t_heck *checks, t_stack *stack);
void saisie(t_heck *checks, t_stack *stack );
void duplicata(t_stack *stack);
void errors();
long    ft_latoi(const char *str);
void printer(t_stack *stacka, t_stack *stackb, t_heck *checks);
void printz(t_stack *stacka, t_stack *stackb);
void allocator(t_stack *stacka, t_stack *stackb, t_heck *checks);
int allspaces(char *str);
void swapper(int *p1 , int *p2 );
void rotator(t_stack *stack);
void reverserotator(t_stack *stack);
void backsort(t_stack *stack, t_heck *checks);
// void selectionSort(int *arr, int n);
void sa(t_stack *stacka, t_stack *stackb);
void sb(t_stack *stacka, t_stack *stackb);
void ss(t_stack *stacka, t_stack *stackb);
void pa(t_stack *stacka, t_stack *stackb);
void pb(t_stack *stacka, t_stack *stackb);
void rrr(t_stack *stacka, t_stack *stackb);
void ra(t_stack *stacka, t_stack *stackb);
void rb(t_stack *stacka, t_stack *stackb);
void rr(t_stack *stacka, t_stack *stackb);
void rra(t_stack *stacka, t_stack *stackb);
void rrb(t_stack *stacka, t_stack *stackb);
int khawi(t_stack *stack);
int aamr(t_stack *stack);
void push(t_stack *stack, int intiger);
void pop(t_stack *stack);
void instructor(t_stack *stacka , t_stack *stackb);
void indicekeeper(t_stack *stacka,t_heck *checks);
int sortedascending(t_stack *stacka);
int sorteddescending(t_stack *stacka);
void sortdial3(t_stack *stacka, t_stack *stackb);
void sortdial5(t_stack *stacka,t_stack *stackb);
void sortdial4(t_stack *stacka,t_stack *stackb);
int findsmallest(int number ,t_stack *stack);
int wachbiggest(int number,t_stack *stacka);
int rangefinder(int size);
int searchinrange(t_stack *stack, int start , int finish, int number);
int chkonbiggest(t_stack *stack);
#endif
