/* ********************************************************************************* */
/*                                                                  /\_____/\        */
/*   ft_memchr.c                                                   /  o   o  \       */
/*                                                                ( ==  ^  == )      */
/*   Re-code the function memchr.                                  )         (       */
/*   These function do not need any external functions.           (           )      */
/*                                                               ( (  )   (  ) )     */
/*                                                              (__(__)___(__)__)    */
/*                                                                                   */
/* ********************************************************************************* */
/*
*/
#include"libft.h"

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned int	index;
	const char		*converted;

	index = 0;
	converted = s;
	while (index < n)
	{
		if (converted[index] == (char)c)
			return ((void *) &converted[index]);
		index++;
	}
	return (NULL);
}
