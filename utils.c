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
// void backsort(t_stack *stack){
// 	int i = 1;
// 	int mynum;
// 	int a = 0;
// 	while(i < stack->size ){
// 	mynum = stack->arr[i];
// 	a = i - 1;
// 	while (a >= 0 && stack->arr[a]> mynum)
// 	{
// 		stack->arr[a+1] = stack->arr[a];
// 		a--;
// 	}
// 		stack->arr[a+1]= mynum;
// 		i++;
// 	}
// }
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
void printer(t_stack *stacka, t_stack *stackb, t_heck *checks)
{

	// for (size_t d = 0; d < stacka->size; d++)
	// {
	//     ft_printf("a [%d] %d\n",d, stacka->arr[d]);
	// }
	// ft_printf("---------\n");
	// ft_printf("stack a\n");
	// ft_printf("---------\n");
	// ft_printf("stack b\n");
	
	int c = stacka->fogani;
	// int d = checks->indexes[stacka->fogani];

		int a = stacka->fogani;
	int b = stacka->fogani;

	// ft_printf("fo9ani a: %d\n", i);
	// ft_printf("fo9ani b: %d\n", j);
	// sa(stacka,stackb);
	// sa(stacka,stackb);
	// sa(stacka,stackb);

	
	// for (size_t k = 0; k < stacka->fogani; k++)
	// {
	//     ft_printf("a [%d] %d\n",k, checks->indexes[k]);
	// }
	// while(i < stacka->size)
	// {
	// 	checks->copy[i] = 
	// }
	while (a >= 0 )
	{
		ft_printf("sorted[%d] %d \t\t stack a [%d] %d \n",c,checks->copy[c],c,stacka->arr[c]);
		a--;
		c--;


	}
	
	// pa(stacka,stackb);
	// pa(stacka,stackb);
	// sb(stacka,stackb);
	// ss(stacka,stackb);
	// ra(stacka,stackb);
	// ra(stacka,stackb);
	// rra(stacka, stackb);
	
	// int i = stackA->top;
    // int j = stackB->top;
    // printf("stack:\n");
    // while(i >= 0 || j >= 0)
    // {
    //     if (i >= 0)
    //     {
    //         printf("%d ", stacka->arr[i]);
    //         i--;
    //     }
    //     else
    //         printf("  ");
    //     if (j >= 0)
    //     {
    //         printf("--- %d", stackb->arr[j]);
    //         j--;
    //     }
    //     printf("\n");
    // }
    // if (i <= 0 && j <= 0)
    // {
    //     printf("_ _\n");
    //     printf("a b\n");
    // }
}
void allocator(t_stack *stacka, t_stack *stackb, t_heck *checks)
{

	// free(stacka->arr);
	// free(stackb->arr);
	stacka->arr = malloc(sizeof(int) * stacka->size);
	stackb->arr = malloc(sizeof(int) * stacka->size);
	checks->copy = malloc(sizeof(int) * stacka->size);
	// checks->indexes = malloc(sizeof(int)* stacka->size);
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
// void pusher(t_stack *stacka, t_stack *stackb){

// }
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

void printz(t_stack *stacka, t_stack *stackb)
{
    int i, j;
printf("-------------------------------------------\n");
    for (i = stacka->fogani, j = stackb->fogani; i >= 0 || j >= 0; i--, j--)
    {
        if (i >= 0) {
            printf("%d\t\t", stacka->arr[i]);
        } else {
            printf("\t\t");
        }

        if (j >= 0) {
            printf("%d", stackb->arr[j]);
        }

        printf("\n");
    }
    printf("Stack A\tStack B\n");
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
		ft_printf("hhh stack li siftini lih 3amr \n");
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
		ft_printf("hhh stack li siftini lih khawi \n");

		return;
	}
	else
	{

		i = stack->arr[stack->fogani--];
	}
}

void instructor(t_stack *stacka , t_stack *stackb){

int tester = 0;

int i = 0;
int ranger = 0;
int range = rangefinder(stacka->size);
// tester = sortedascending(stacka);
	if (sortedascending(stacka)==0)
		errors();
// if (tester == 0)
// 	ft_printf("sorted \n");

// if (tester == 1)
// 	ft_printf("scrambled \n");
if (stacka->size == 2)
	sortdial3(stacka,stackb);
if (stacka->size == 3)
	sortdial3(stacka,stackb);
if (stacka->size == 4)
	sortdial5(stacka,stackb);
if (stacka->size == 5)
	sortdial5(stacka,stackb);
if (stacka->size >= 100 ){
	// ranger = 3;
	// printf("/%d\n",searchinrange(stacka,stacka->fogani, stacka->fogani-ranger, stacka->arr[stacka->fogani]));
	// printf("%d\n",stackb->fogani);
	while (stacka->fogani + 1)
	{
		if (stacka->arr[stacka->fogani] < ranger)
		{
			pb(stacka,stackb);
			rb(stacka,stackb);
			ranger ++;
		}
		else if (stacka->arr[stacka->fogani] > ranger && stacka->arr[stacka->fogani] < ranger + range){
			pb(stacka,stackb);
			ranger ++;
		}
		else
		{
			ra(stacka,stackb);
		}
		// printf("%d,ranger = %d\n", stacka->fogani, ranger);
	}
	

}
	// if(stacka)
	// asghar nombre 3ndo indice 0
	// tri o khas indice ib9a m7afd 3la valeur
	// 15 17 2 : 2 1 0
	int num = 0;
	int cte = 10;
	//// while num < size 
	// if( top dial a < num ) pb
	// top if (num + chunk > a >num ) pb
	// if (a > num + chunk) ra
	//// num++;

	//if pb num++ || if 15 pb num ++

}

void indicekeeper(t_stack *stacka,t_heck *checks){

int i = 0;
int j ; 
while (i < stacka->size)
	{
		// i = j;
		j = 0;
		while (j < stacka->size)
		{
		
		if (stacka->arr[i] == checks->copy[j])
		{
			stacka->arr[i] = j;
			j = stacka->size;
			/* code */
		}
		j++;
		}
		 
		i++;
		/* code */
	}
	
}
int sortedascending(t_stack *stacka){

	int i; 
	int result = 0;
	int j = 0;
	i=0;

	while(i < stacka->fogani){

		if (stacka->arr[i] > stacka->arr[i+1] ){
			// ft_print
			// ft_printf("hada [%d] , b hada [%d]\n", stacka->arr[i] , stacka->arr[i+1]);
		// i++;
		result = 1;
		}

	i++;

	} 
	return (result);
}
void sortdial3(t_stack *stacka, t_stack *stackb){




	if(stacka->arr[0] == stacka->arr[stacka->fogani - 1]+1 || stacka->arr[stacka->fogani - 1] == stacka->arr[stacka->fogani]+1)
	{
		sa(stacka,stackb);
	}
	if(stacka->arr[0]== 1)
	ra(stacka,stackb);
	if(stacka->arr[stacka->fogani] > stacka->arr[stacka->fogani - 1] && stacka->arr[stacka->fogani] < stacka->arr[0])
	rra(stacka,stackb);
}
int findsmallest(int number ,t_stack *stack){

int i = 0;
int bigger = stack->arr[0];
	while (i <= stack->fogani)
	{
		if (bigger  < stack->arr[i])
			bigger = stack->arr[i];
		
		i++;
	}
	

	return (bigger == number);

}
int sorteddescending(t_stack *stacka){

	int i; 
	int result = 0;
	int j = 0;
	i=0;

	while(i < stacka->fogani){

		if (stacka->arr[i] < stacka->arr[i+1] ){
			// ft_print
			// ft_printf("hada [%d] , b hada [%d]\n", stacka->arr[i] , stacka->arr[i+1]);
		// i++;
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
	// ft_printf("sorted mglobin\n");
	/* code */
	}
	else
	ra(stacka,stackb);

	}
	pb(stacka,stackb);
	while (findsmallest(stacka->arr[stacka->fogani],stacka) == 0){

	if (sorteddescending(stacka)==0)
	{
	// ft_printf("sorted mglobin\n");
	/* code */
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

	while (findsmallest(stacka->arr[stacka->fogani],stacka) == 0){


	if (sorteddescending(stacka)==0)
	{
		rra(stacka,stackb);
	// ft_printf("sorted mglobin\n");
	/* code */
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