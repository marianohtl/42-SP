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

int ft_tolower(int c)
{
	int new_character;

	new_character = c;
	if(c >= 'A' && c <= 'Z')
	{
		new_character = c + 32;
	}
	return(new_character);
}
