/* ********************************************************************************* */
/*                                                                  /\_____/\        */
/*   ft_strrchr.c                                                  /  o   o  \       */
/*                                                                ( ==  ^  == )      */
/*   Re-code the function strrchr.                                 )         (       */
/*   These function do not need any external functions.           (           )      */
/*                                                               ( (  )   (  ) )     */
/*                                                              (__(__)___(__)__)    */
/*                                                                                   */
/* ********************************************************************************* */
/*
*/
#include"libft.h"

char	*ft_strrchr(const char *string, int c)
{
	unsigned int	length;
	char			convert_c;

	length = ft_strlen(string);
	convert_c = (char) c;
	while (length > 0)
	{
		if (string[length] == convert_c)
			return ((char *)&string[length]);
		length--;
	}
	if (string[length] == convert_c)
		return ((char *)&string[length]);
	return (NULL);
}
