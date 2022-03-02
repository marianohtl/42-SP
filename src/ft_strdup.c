/* ********************************************************************************* */
/*                                                                  /\_____/\        */
/*   ft_strdup.c                                                   /  o   o  \       */
/*                                                                ( ==  ^  == )      */
/*   Re-code the function strdup.                                  )         (       */
/*   Using the function malloc.                                   (           )      */
/*                                                               ( (  )   (  ) )     */
/*                                                              (__(__)___(__)__)    */
/*                                                                                   */
/* ********************************************************************************* */
/*
*/
#include"libft.h"
#include<stdlib.h>

char	*ft_strdup(const char *s)
{
	char			*result;
	unsigned int	size;

	size = ft_strlen(s) + 1;
	result = malloc(size);
	if (result == NULL)
		return (result);
	ft_strlcpy(result, s, size);
	return (result);
}
