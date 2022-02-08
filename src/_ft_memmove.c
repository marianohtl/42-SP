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
    Checks for an alphanumeric character; it is equivalent
	to (isalpha(c) || isdigit(c)).

	Checa se o parâmetro recebido é um alfanumérico. (letras e números)
*/

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	unsigned int index;
	if(src < dest)
	{
		index = n;
		while (index > 0)
		{
			((unsigned char *)dest)[index - 1] = ((unsigned char *)src)[index - 1];
			index = index - 1;
		}
	}else{
		index = 0;
		while (index < n)
		{
			((unsigned char *)dest)[index] = ((unsigned char *)src)[index];
			index = index + 1;
		}
	}
	return (dest);
}
