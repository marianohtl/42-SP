/* ********************************************************************************* */
/*                                                                  /\_____/\        */
/*   ft_bzero.c                                                    /  o   o  \       */
/*                                                                ( ==  ^  == )      */
/*   Re-code the function bzero.                                   )         (       */
/*   These function do not need any external functions.           (           )      */
/*                                                               ( (  )   (  ) )     */
/*                                                              (__(__)___(__)__)    */
/*                                                                                   */
/* ********************************************************************************* */
/*
    This function sets the first n bytes of the area starting at s to zero (bytes containing aq\0aq).

	Esta função seta os 'n' primeiros bytes que iniciam '*s' para zero.
*/

void ft_bzero(void *s, unsigned int n)
{
	int index;
	index = 0;
	while (index < n)
	{
		((unsigned char *)s)[index] = '\0';
		index++;
	}
}
