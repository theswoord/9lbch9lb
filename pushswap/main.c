#include "push_swap.h"
#include <stdio.h>
int main (int ac , char** av){
    int test =0;
    
t_heck	*pusw;    
t_a *stacka;
t_b *stackb;

stacka = (t_a*)malloc(sizeof(t_a));

stackb = (t_b*)malloc(sizeof(t_b));
ft_memset(stacka,0,sizeof(t_a));
ft_memset(stackb,0,sizeof(t_b));

splitter(pusw , av);
}
/*
void splitter(t_heck *pusw, char **av, int ac){
	int a = 1;
	
	char *strtwil;
	char *str;
	str = av[a];
	
	printf("hada ktbto %s\n",av[a]);
	
	while(a<=ac)
	{
		strtwil = ft_strjoin(strtwil,str);
			printf("hada strtrwil %s\n",strtwil);
		printf("hada str %s\n",str);


		str=av[a];
		a++;
	}
	pusw->numbers=ft_split(strtwil,' ');
	printf ("ta hada%s\n",pusw->numbers[2]);
}*/
void splitter(t_heck *pusw, char **av){
//	int a = 1;
	
//	char *strtwil;
//	char *str;
//	str = av[a];
	
//	printf("hada ktbto %s\n",av[a]);
	
//	while(a<=ac)
//	{
//		strtwil = ft_strjoin(strtwil,str);
//			printf("hada strtrwil %s\n",strtwil);
//		printf("hada str %s\n",str);
//
//
//		str=av[a];
//		a++;
//	}
int i = 0;
	printf("avwa7d %s",av[1]);
	pusw->numbers=ft_split(av[1],'.');
	while (i < 10)
	{
		printf("%s",pusw->numbers)
	}
	
	printf ("ta hada%s\n",pusw->numbers[2]);
}
