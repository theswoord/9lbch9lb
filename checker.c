#include "push_swap.h"

void digitizer(t_heck *checks, t_stack *stack)
{
    int i = 0;
    int j = 0;
    int kayna = 0;

    // while (checks->strtwil[i])
    // {

    //     if (ft_isdigit(checks->strtwil[i]) == 1 || checks->strtwil[i] == '-' || checks->strtwil[i] == '+' || checks->strtwil[i] == ' ')
    //     {
    //         if (checks->strtwil[i] == '-' || checks->strtwil[i] == '+')
    //         {
    //             if (ft_isdigit(checks->strtwil[i + 1]) == 0)
    //             {
    //                 write(1, "Error\n", 6);
    //                 exit(0);
    //             }
    //         }

    //         i++;
    //     }
    //     else
    //     {
    //         write(1, "Error\n", 6);
    //         exit(0);
    //     }
    //     saisie(checks, stack);
    // }
    //     if(ft_strnstr(checks->strtwil,"  ",ft_strlen(checks->strtwil)))
    //     {
    //     ft_printf("tga3ad\n");
    //     exit(0);
    // }
    while(checks->tableau[i])
    {
        stack->size++;
        // kayna++;
        while(checks->tableau[i][j]){
            if(ft_isdigit(checks->tableau[i][j])|| checks->tableau[i][j]=='+' || checks->tableau[i][j]=='-' )
            {

                if(checks->tableau[i][j]=='+' || checks->tableau[i][j]=='-' )
                {
                    j++;
                    if(!ft_isdigit(checks->tableau[i][j]))
                {
                    write(1, "Error\n", 6);
                    // ft_printf("%s \n",checks->tableau[i]);
                    ft_printf("mochkil f %c \n",checks->tableau[i][j]);
 
                    exit(0);
                }
                // j++;
                if(j != 1 &&ft_isdigit(checks->tableau[i][j-2]))
                {
                    write(1, "Error\n", 6);

                    ft_printf(";protection;%s \n",checks->tableau[i]);
                    exit(0);
                }
                }

            }
            else
            {
                     write(1, "Error\n", 6);
                    ft_printf("%s \n",checks->tableau[i]);
                    exit(0);
            }
            j++;

        }
        j = 0;
        // ft_printf("%d\n",kayna);
        i++;
    }
}
void saisie(t_heck *checks, t_stack *stack)
{
int i = 0;
ft_printf("%d \n", stack->size);
    free(stack->arr);
    stack->arr = malloc(stack->size);


    while (checks->tableau[i])
    {
        if(ft_latoi(checks->tableau[i]) > 2147483647)
            errors();
        if(ft_latoi(checks->tableau[i]) < -2147483648)
            errors();
   
        stack->arr[i] = ft_atoi(checks->tableau[i]);
        i++;
    }

}
void duplicata(t_stack *stack){

    // for (size_t d = 0; d < stack->size; d++)
    // {
    // //   ft_printf("splited [%d] %s\n",d, checks->tableau[d]);
    //     ft_printf("array [%d] %d\n",d, stack->arr[d]);
    // }
    int i =0;
    int j =1;

    while(i < stack->size){
        while (j < stack->size)
        {
        // ft_printf(" ach f ;i;ndex %d li kitcompara =%d \n",i,stack->arr[i]);
        // ft_printf(" ach f ;j;index %d li kicompari =%d \n",j,stack->arr[j]);
        if(stack->arr[i]==stack->arr[j])
            errors();

        j++;

        }
        i++;
        j = i+1;

        
    }
}