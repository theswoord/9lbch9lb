
#include"libft.h"

int ft_strcmp(const char *s1 , const char *s2 , size_t n){
    size_t b = 0;
    int c = 0;
while ((s2[b] || s1[b]) && (b < n))
{
    if(s1[b] != s2[b])
    {
    c = (s1[b] - s2[b]);
   return(c);
    }
     b++;
   
}
return 0;




    
}
/*main (){

    char comp1[]="this";
    char comp2[]="tbis";
    printf("%d\n",strncmp(comp1,comp2,2));
    //printf("%d\n",ft_strncmp(comp1,comp2,2));

} */
