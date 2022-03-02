/* ********************************************************************************* */
/*                                                                  /\_____/\        */
/*   ft_memcpy.c                                                   /  o   o  \       */
/*                                                                ( ==  ^  == )      */
/*   Re-code the function memcpy.                                  )         (       */
/*   These function do not need any external functions.           (           )      */
/*                                                               ( (  )   (  ) )     */
/*                                                              (__(__)___(__)__)    */
/*                                                                                   */
/* ********************************************************************************* */
/*
	This function copies n bytes from memory area src to memory area dest.
	The memory areas must not overlap.

	Esta função copia os 'n' bytes de '*src', para '*dest'.
	As áreas de memória não devem se sobrepor.


*/

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned int		index;
	unsigned char		*str_dest;
	const unsigned char	*str_src;

	str_dest = dest;
	str_src = src;
	index = 0;
	while (index < n)
	{
		str_dest[index] = str_src[index];
		index = index + 1;
	}
	return (dest);
}
