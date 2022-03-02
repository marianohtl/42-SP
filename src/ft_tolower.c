/* ********************************************************************************* */
/*                                                                  /\_____/\        */
/*   ft_tolower.c                                                  /  o   o  \       */
/*                                                                ( ==  ^  == )      */
/*   Re-code the function tolower.                                 )         (       */
/*   These function do not need any external functions.           (           )      */
/*                                                               ( (  )   (  ) )     */
/*                                                              (__(__)___(__)__)    */
/*                                                                                   */
/* ********************************************************************************* */
/*
     Converts the letter c to lower case, if possible.

	 Converte o parâmetro 'c' recebido para minúsculo, se possível.
*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
