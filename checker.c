#include "push_swap.h"

void digitizer(t_heck *checks, t_stack *stack){
int i = 0;

while(checks->strtwil[i]){

    if(ft_isdigit(checks->strtwil[i]) == 1 || checks->strtwil[i] == '-'|| checks->strtwil[i] == '+'|| checks->strtwil[i] == ' ')
    {
        if(checks->strtwil[i] == '-'|| checks->strtwil[i] == '+')
            {
                if(ft_isdigit(checks->strtwil[i+1]) == 0   )
                {
                    write(1,"Error\n",6);
                     exit(0);
                }
            }

        i++;
    }
    else
    {
        write(1,"Error\n",6);
        exit(0);
    }
    saisie(checks,stack);
}





}
void saisie(t_heck *checks, t_stack *stack ){

int i = 0 ;
int sign = 0;
int digit = 0;
int index = 0;
int debut= 0 ;
int fin = 0;
char *t9at3;
// int hhh[5];
    // ft_printf(";%s; \n ", checks->strtwil);

    while(checks->strtwil[i] != '\0')
{

    while (checks->strtwil[i] == '+'|| checks->strtwil[i] == '-'){
    sign++;
    debut = i;
    i++;
        // ft_printf("char %c",checks->strtwil[i]);
        // ft_printf("hada i f za2id na9is %d \n ", i);
        // ft_printf("hada debut %d \n ", debut);
    }
    while (ft_isdigit(checks->strtwil[i])==1)
    {
                // ft_printf("char %c",checks->strtwil[i]);

        digit++;
        i++;
        debut = i- digit;
            // ft_printf("hada i f digit  %d \n ", i);

        /* code */
    }
    if (checks->strtwil[i] == ' '){
        sign = 0;
        digit = 0;
        fin = i ;
        i++;
    }
            // ft_printf("hada debut %d \n", debut);
            // ft_printf("hada fin %d \n", fin);

    t9at3 = ft_substr(checks->strtwil,debut,fin-debut);
    // ft_printf("hada i flkher  %d \n ", i);
    // ft_printf(";%s; \n ", t9at3);
    stack->arr[index++] = ft_atoi(t9at3);
    free(t9at3);
    // index++; 
    // hhh[0] = 1;
    // ft_printf("arr howa %d",stack->arr[index] );
    
    // i++;
}


}