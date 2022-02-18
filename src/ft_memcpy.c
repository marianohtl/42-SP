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

void *ft_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned int index;
	index = 0;
	while (index < n)
	{
		((unsigned char *)dest)[index] = ((unsigned char *)src)[index];
		index = index + 1;
	}
	return dest;
}
