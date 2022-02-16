 /* ********************************************************************************* */
/*                                                                  /\_____/\        */
/*   ft_memcmp.c                                                   /  o   o  \       */
/*                                                                ( ==  ^  == )      */
/*   Re-code the function memcmp.                                  )         (       */
/*   These function do not need any external functions.           (           )      */
/*                                                               ( (  )   (  ) )     */
/*                                                              (__(__)___(__)__)    */
/*                                                                                   */
/* ********************************************************************************* */
/*
    This function compares the first n bytes (each interpreted as unsigned char) of
	the memory areas s1 and s2.

	A função compara '*s1' com '*s2', até o parâmetro definido em 'size'.
	Caso a comparação seja igual, ela retorna 0, caso contrário retorna um
	número positivo (se 's1' > 's2') ou um número negativo (se 's2' > 's1').
*/
 int ft_memcmp(const void *s1, const void *s2, unsigned int size)
{
	unsigned int index;
	char * converted_s1;
	char * converted_s2;

	converted_s1 = (char *) s1;
	converted_s2 = (char *) s2;
	index = 0;
	while (index < size)
	{
		if(converted_s1[index] != converted_s2[index])
		{
			return((int) (converted_s1[index] - converted_s2[index]));
		}
		index++;
	}
	return(0);
}
