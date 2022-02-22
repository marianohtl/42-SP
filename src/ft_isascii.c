/* ********************************************************************************* */
/*                                                                  /\_____/\        */
/*   ft_isascii.c                                                  /  o   o  \       */
/*                                                                ( ==  ^  == )      */
/*   Re-code the function isascii.                                 )         (       */
/*   These function do not need any external functions.           (           )      */
/*                                                               ( (  )   (  ) )     */
/*                                                              (__(__)___(__)__)    */
/*                                                                                   */
/* ********************************************************************************* */
/*
     Checks whether c is a 7-bit unsigned char value that fits into the ASCII
	 character set.

	 Checa se o parâmetro recebido é um valor não negativo de 7 bits que
	 corresponda ao conjunto de caracteres ASCII.
*/

int ft_isascii(int c)
{
	if (((c >= 0) && (c <= 127)))
	{
		return (1);
	}
	return (0);
}
