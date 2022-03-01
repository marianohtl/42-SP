/* ********************************************************************************* */
/*                                                                  /\_____/\        */
/*   ft_strnstr.c                                                  /  o   o  \       */
/*                                                                ( ==  ^  == )      */
/*   Re-code the function strnstr.                                 )         (       */
/*   These function do not need any external functions.           (           )      */
/*                                                               ( (  )   (  ) )     */
/*                                                              (__(__)___(__)__)    */
/*                                                                                   */
/* ********************************************************************************* */
/*
*/
#include"libft.h"

char * ft_strnstr(const char * big, const char *little,unsigned int len)
{
	unsigned int index;
	unsigned int i_big;
	unsigned int i_little;

	index = 0;
	i_big = 0;
	i_little = 0;
	while (index < len)
	{
		if(little[i_little] == '\0')
			return((char *)&big[index]);
		if(big[i_big] == little[i_little] && i_big < len)
		{
			i_little++;
			i_big++;
		}else{
			index++;
			i_big = index;
			i_little = 0;
		}
	}
	return(NULL);
}
