/* ********************************************************************************* */
/*                                                                  /\_____/\        */
/*   ft_isprint.c                                                  /  o   o  \       */
/*                                                                ( ==  ^  == )      */
/*   Re-code the function isprint.                                 )         (       */
/*   These function do not need any external functions.           (           )      */
/*                                                               ( (  )   (  ) )     */
/*                                                              (__(__)___(__)__)    */
/*                                                                                   */
/* ********************************************************************************* */
/*
     Checks for any printable character including space.

	 Verifica se c é um caracter que pode ser impresso na tela
	 (incluindo o espaço) e retorna um número positivo.
*/
int ft_isprint(int c)
{
	if (((c >= 32) && (c <= 126)))
	{
		return (16384);
	}
	return (0);
}
