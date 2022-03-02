/* ********************************************************************************* */
/*                                                                  /\_____/\        */
/*   ft_toupper.c                                                  /  o   o  \       */
/*                                                                ( ==  ^  == )      */
/*   Re-code the function toupper.                                 )         (       */
/*   These function do not need any external functions.           (           )      */
/*                                                               ( (  )   (  ) )     */
/*                                                              (__(__)___(__)__)    */
/*                                                                                   */
/* ********************************************************************************* */
/*
     Converts the letter c to upper case, if possible.

	 Converte o parâmetro 'c' recebido para maiúsculo, se possível.
*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
