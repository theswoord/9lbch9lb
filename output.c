#include "push_swap.h"

void errors()
{

    write(1, "Error\n", 6);
    exit(1);
}
int allspaces(char *str){
    int i;
    i = 0;


    while (str[i]){
        if(str[i] != ' ')
            return 0;
        i++;
            
    }
    return 1;
    
}