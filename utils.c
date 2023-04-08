/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali < nbouhali@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 16:19:53 by nbouhali          #+#    #+#             */
/*   Updated: 2023/04/08 16:25:33 by nbouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long ft_latoi(const char *str)
{
	int b;
	int ichara;
	long l7asol;

	b = 0;
	ichara = 1;
	l7asol = 0;
	while ((str[b] >= 9 && str[b] <= 13) || str[b] == 32)
	{
		b++;
	}
	if (str[b] == '-' || str[b] == '+')
	{
		if (str[b] == '-')
			ichara *= -1;
		b++;
	}
	while (str[b] >= '0' && str[b] <= '9')
	{
		l7asol *= 10;
		l7asol += str[b] - '0';
		b++;
	}
	return (l7asol * ichara);
}
void backsort(t_stack *stack, t_heck *checks)
{
	int i = 1;
	int mynum;
	int a = 0;
	while (i < stack->size)
	{
		mynum = checks->copy[i];
		a = i - 1;
		while (a >= 0 && checks->copy[a] < mynum)
		{
			checks->copy[a + 1] = checks->copy[a];
			a--;
		}
		checks->copy[a + 1] = mynum;
		i++;
	}
}

void allocator(t_stack *stacka, t_stack *stackb, t_heck *checks)// 7iedt 	stackb->arr = malloc(sizeof(int) * stacka->size);
{
	stacka->arr = malloc(sizeof(int) * stacka->size);
	// stackb->arr = malloc(sizeof(int) * stacka->size);
	checks->copy = malloc(sizeof(int) * stacka->size);
	stackb->size = stacka->size;
	stackb->fogani = -1;
}

void swapper(int *p1, int *p2)
{

	int temp;

	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
void rotator(t_stack *stack)
{
	int temp;
	int i = stack->fogani;
	temp = stack->arr[stack->fogani];

	while (i >= 1)
	{

		stack->arr[i] = stack->arr[i - 1];
		i--;
	}
	stack->arr[0] = temp;
}
void reverserotator(t_stack *stack)
{
	int temp;
	int i = 0;
	temp = stack->arr[0];

	while (i <= stack->fogani)
	{
		stack->arr[i] = stack->arr[i + 1];
		i++;
	}
	stack->arr[stack->fogani] = temp;
}
int khawi(t_stack *stack)
{

	if (stack->fogani == -1)
	{
		return 1;
	}
	else
		return 0;
}
int aamr(t_stack *stack)
{

	if (stack->fogani == stack->size - 1)
	{
		return 1;
	}
	else
		return 0;
}
void push(t_stack *stack, int intiger)
{

	if (aamr(stack) == 1){
		return;

	}
	else
	{
		stack->fogani = stack->fogani + 1;
		stack->arr[stack->fogani] = intiger;
	}
}
void pop(t_stack *stack)
{
	int i = 0;
	if (khawi(stack) == 1){
		return;
	}
	else
	{

		i = stack->arr[stack->fogani--];
	}
}

void instructor(t_stack *stacka , t_stack *stackb){

	if (sortedascending(stacka)==0)
				errors(NULL,stacka,3);

stackb->arr = malloc(sizeof(int) * stacka->size);


 if (stacka->size == 2)
	sortdial2(stacka,stackb);
else if (stacka->size == 3)
	sortdial3(stacka,stackb);
else if (stacka->size == 4)
	sortdial4(stacka,stackb);
else if (stacka->size == 5)
	sortdial5(stacka,stackb);
else if (sorteddescending(stacka)==0)
{
	while (stacka->fogani + 1)
	{
		pb(stacka,stackb);

	}
	while (stackb->fogani + 1)
	{
		rrb(stacka,stackb);
		pa(stacka,stackb);

	}
}
else if (stacka->size > 5 ){
	int ranger = 0;
int range = rangefinder(stacka->size);

	int kbir = stacka->fogani;
	while (stacka->fogani + 1)
	{
		if (stacka->arr[stacka->fogani] <= ranger)
		{
			pb(stacka,stackb);
			rb(stacka,stackb);
			ranger++;
		}
		else if (stacka->arr[stacka->fogani] <= ranger + range){
			pb(stacka,stackb);
			ranger++;
		}
		else
			ra(stacka,stackb);
	}
	int finkayn;
	while (stackb->fogani+1)
	{
	finkayn=chkonbiggest(stackb);
	
		while (stackb->arr[stackb->fogani] != kbir){
		 
		if (finkayn > stackb->fogani /2 )
			rb(stacka,stackb);
		else 
			rrb(stacka,stackb);
		
		}
		pa(stacka,stackb);		
		kbir--;
		
		
		
	}
	
	// freeingmachine(NULL,stacka->arr,NULL,stacka,0);
	// freeingmachine(NULL,stackb->arr,NULL,stackb,0);
	// while (1)
	// {
	// 	/* code */
	// }
	

	

}


}

void indicekeeper(t_stack *stacka,t_heck *checks){

int i = 0;
int j ; 
while (i < stacka->size)
	{
		j = 0;
		while (j < stacka->size)
		{
		
		if (stacka->arr[i] == checks->copy[j])
		{
			stacka->arr[i] = stacka->fogani - j;
			j = stacka->size;
		}
		j++;
		}
		 
		i++;
	}
	
}
int sorteddescending(t_stack *stacka){

	int i; 
	int result = 0;
	i=0;

	while(i < stacka->fogani){

		if (stacka->arr[i] > stacka->arr[i+1] ){
		result = 1;
		}

	i++;

	} 
	return (result);
}
void sortdial3(t_stack *stacka, t_stack *stackb){




	if(stacka->arr[0] == stacka->arr[stacka->fogani - 1]-1 || stacka->arr[stacka->fogani - 1] == stacka->arr[stacka->fogani]-1)
	{
		sa(stacka,stackb);
	}
	if(stacka->arr[0] > stacka->arr[stacka->fogani -1]&& stacka->arr[0] < stacka->arr[stacka->fogani])
	ra(stacka,stackb);
	if(stacka->arr[stacka->fogani] < stacka->arr[stacka->fogani - 1] && stacka->arr[stacka->fogani] > stacka->arr[0] )
	rra(stacka,stackb);
}
int findsmallest(int number ,t_stack *stack){

int i = 0;
int bigger = stack->arr[0];
	while (i <= stack->fogani)
	{
		if (bigger  > stack->arr[i])
			bigger = stack->arr[i];
		
		i++;
	}
	

	return (bigger == number);

}
int sortedascending(t_stack *stacka){

	int i; 
	int result = 0;
	i=0;

	while(i < stacka->fogani){

		if (stacka->arr[i] < stacka->arr[i+1] ){
		result = 1;
		}

	i++;

	} 
	return (result);
}

void sortdial5(t_stack *stacka,t_stack *stackb){

	while (findsmallest(stacka->arr[stacka->fogani],stacka) == 0){


	if (sorteddescending(stacka)==0)
	{
		rra(stacka,stackb);
	}
	else
	ra(stacka,stackb);

	}
	pb(stacka,stackb);
	while (findsmallest(stacka->arr[stacka->fogani],stacka) == 0){

	if (sorteddescending(stacka)==0)
	{
		rra(stacka,stackb);
	}
	else
	ra(stacka,stackb);

	}
	pb(stacka,stackb);
	if (stacka->fogani == 2)
	sortdial3(stacka,stackb);
	pa(stacka,stackb);
	pa(stacka,stackb);
}

int rangefinder(int size){

	int y;
	float fassila = 0.03;
	y = fassila * size + 12;

	return (y);
}
void sortdial4(t_stack *stacka,t_stack *stackb){

		// printf("%d\n",findsmallest(stacka->arr[stacka->fogani],stacka));
	while (findsmallest(stacka->arr[stacka->fogani],stacka) == 0){

	if (sortedascending(stacka)==0)
	{
		rra(stacka,stackb);
	}
	else
	ra(stacka,stackb);

	}
	pb(stacka,stackb);
	
	if (stacka->fogani == 2)
	sortdial3(stacka,stackb);
	pa(stacka,stackb);
	// pa(stacka,stackb);
}
void sortdial2(t_stack *stacka,t_stack *stackb){

	if (stacka->arr[0]<stacka->arr[1])
		sa(stacka,stackb);



}
int wachbiggest(int number,t_stack *stacka){
	int i = 0;
	int smallestindex = stacka->arr[0];

	while (i >= stacka->fogani)
	{
		if (smallestindex < stacka->arr[i])
		{
			smallestindex = stacka->arr[i];
		}

		i++;
	}
	return(smallestindex == number);
}
int searchinrange(t_stack *stack, int start , int finish, int number){

	int i = start;
	// int temp = start;

	while (i > finish && i <= start)
	{
		if(number < stack->arr[i]){
		// printf("kbir\n");
		return 0;
		// temp = stack->arr[i];
			// return (1); //sghir mn range kamlo;
		}
		// return (1);

		// if(number <= stack->arr[i]){
		// printf("sghir\n");
		// 	return (-1); // kber mn range kamlo;
		// }
		// printf("range is %d\n", stack->arr[i]);
	i--;
	}
	return (1);
}
int finkayninrange(t_stack *stack, int start , int finish, int number){

	int i = start;
	while (i > finish && i <= start)
	{
		if(number >= stack->arr[i])
			return (1); //sghir mn range kamlo;
		if(number <= stack->arr[i])
			return (-1); // kber mn range kamlo;
		// printf("range is %d\n", stack->arr[i]);
	i--;
	}
	return 0;
}
int chkonbiggest(t_stack *stack){
	int i = 0;
	int big = stack->arr[0];
	int max_index = 0;
	while (i <= stack->fogani)
	{
		if (big < stack->arr[i])
		{
			
			big = stack->arr[i];
			max_index = i;	

			// printf(".%d,,,%d \n",stack->arr[max_index],max_index);
		}


		i++;
	}
	return(max_index);
}