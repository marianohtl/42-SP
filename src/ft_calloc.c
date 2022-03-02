/* ********************************************************************************* */
/*                                                                  /\_____/\        */
/*   ft_calloc.c                                                   /  o   o  \       */
/*                                                                ( ==  ^  == )      */
/*   Re-code the function calloc.                                  )         (       */
/*   Using the function malloc.                                   (           )      */
/*                                                               ( (  )   (  ) )     */
/*                                                              (__(__)___(__)__)    */
/*                                                                                   */
/* ********************************************************************************* */
/*
*/
#include"libft.h"
#include<stdlib.h>

void	*ft_calloc(unsigned int nmenb, unsigned int size)
{
	unsigned int	length;
	void			*result;

	length = nmenb * size;
	result = malloc(length);
	if (result == NULL)
		return (result);
	ft_bzero(result, length);
	return (result);
}
