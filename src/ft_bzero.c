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
    This function sets the first n bytes of the area starting at s to zero (bytes containing '\0').

	Esta função seta os 'n' primeiros bytes que iniciam '*s' para zero (bytes contendo '\0').
*/
#include"libft.h"

void	ft_bzero(void *s, unsigned int n)
{
	ft_memset(s, '\0', n);
}
