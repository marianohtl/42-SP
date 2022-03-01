/* ********************************************************************************* */
/*                                                                  /\_____/\        */
/*   ft_strchr.c                                                  /  o   o  \       */
/*                                                                ( ==  ^  == )      */
/*   Re-code the function strchr.                                 )         (       */
/*   These function do not need any external functions.           (           )      */
/*                                                               ( (  )   (  ) )     */
/*                                                              (__(__)___(__)__)    */
/*                                                                                   */
/* ********************************************************************************* */
/*
*/
#include"libft.h"

char	*ft_strchr(const char *string, int c)
{
	unsigned int	index;
	char			convert_c;

	convert_c = (char) c;
	index = 0;
	while (string[index] != '\0')
	{
		if (string[index] == convert_c)
			return ((char *) &string[index]);
		index++;
	}
	if (string[index] == convert_c)
		return ((char *) &string[index]);
	return (NULL);
}
