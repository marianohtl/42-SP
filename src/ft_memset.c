/* ********************************************************************************* */
/*                                                                  /\_____/\        */
/*   ft_memset.c                                                   /  o   o  \       */
/*                                                                ( ==  ^  == )      */
/*   Re-code the function memset.                                  )         (       */
/*   These function do not need any external functions.           (           )      */
/*                                                               ( (  )   (  ) )     */
/*                                                              (__(__)___(__)__)    */
/*                                                                                   */
/* ********************************************************************************* */
/*
     The memset() function fills the first n bytes of the memory area pointed
	 to by s with the constant byte c.

	 A função percorre e preenche s até o enézimo byte (n) a partir do endereço
	 de memória apontado por s com o valor de c.
*/

void	*ft_memset(void *s, int c, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (index < n)
	{
		((unsigned char *)s)[index] = c;
		index++;
	}
	return (s);
}
