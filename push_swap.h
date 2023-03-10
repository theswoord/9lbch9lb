#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H
#include "./libft/libft.h"
#include "./gnl/get_next_line.h"
#include "./printf/ft_printf.h"


typedef struct s_stack
{
int fogani;
int size;
int arr[50];
}t_stack;

// typedef struct s_b
// {
// int top;
// int size;
// int *data;
// }t_b;
typedef struct S_heck{
char *strtwil;


}t_heck;

void splitter(t_heck *pusw, char **av);
char* kassama(int ac,char **av);
void digitizer(t_heck *checks, t_stack *stack);
void saisie(t_heck *checks, t_stack *stack );
#endif
