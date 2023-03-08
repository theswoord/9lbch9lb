#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H
#include "./libft/libft.h"



typedef struct s_a
{
int top;
int size;
int *data;
}t_a;

typedef struct s_b
{
int top;
int size;
int *data;
}t_b;
typedef struct S_heck{
char **numbers;

}t_heck;

void splitter(t_heck *pusw, char **av);
#endif
