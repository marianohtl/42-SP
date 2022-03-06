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

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			length;
	void			*result;

	length = nmemb * size;
	result = malloc(length);
	if (result == NULL)
		return (result);
	ft_bzero(result, length);
	return (result);
}
