/* ********************************************************************************* */
/*                                                                  /\_____/\        */
/*   ft_memmove.c                                                  /  o   o  \       */
/*                                                                ( ==  ^  == )      */
/*   Re-code the function memmove.                                 )         (       */
/*   These function do not need any external functions.           (           )      */
/*                                                               ( (  )   (  ) )     */
/*                                                              (__(__)___(__)__)    */
/*                                                                                   */
/* ********************************************************************************* */
/*
	The  memmove()  function  copies  n bytes from memory area src to memory area dest.
	The memory areas may overlap: copying takes place as though the bytes in src are
	first copied into a temporary array that does not overlap src or dest, and the bytes
	are then copied from the  temporary  array  to dest.

	A função memmove copia os n bytes da variável src para dest.
	Src e dest podem se sobrepor, e caso isso ocorra, a função deve simular a
	utilização de um pivot, garantindo que mesmo que haja sobreposição dest recebe
	o conteúdo original de src.

	Devido as limitações do uso de libs., não temos como criar um pivot.
	A função copia src em dest, porém nos casos em que src esteja em uma posição
	na memória a frente de dest (src > dest), iniciamos a cópia do último byte de
	src no intuito de evitar problemas de sobreposição (caso
	ocorra essa intesecção de src e dest).
*/
#include"libft.h"

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	unsigned int		index;
	unsigned char		*str_dest;
	const unsigned char	*str_src;

	str_dest = dest;
	str_src = src;
	if (src < dest)
	{
		index = n;
		while (index > 0)
		{
			str_dest[index - 1] = str_src[index - 1];
			index--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
