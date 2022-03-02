/* ********************************************************************************* */
/*                                                                  /\_____/\        */
/*   ft_strlcat.c                                                  /  o   o  \       */
/*                                                                ( ==  ^  == )      */
/*   Re-code the function strlcat.                                 )         (       */
/*   These function do not need any external functions.           (           )      */
/*                                                               ( (  )   (  ) )     */
/*                                                              (__(__)___(__)__)    */
/*                                                                                   */
/* ********************************************************************************* */
/*

*/
#include"libft.h"

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	size_src;
	unsigned int	size_dest;

	size_src = ft_strlen(src);
	size_dest = ft_strlen(dest);
	if (size <= size_dest)
		return (size_src + size);
	ft_strlcpy(&dest[size_dest], src, size - size_dest);
	return (size_dest + size_src);
}
