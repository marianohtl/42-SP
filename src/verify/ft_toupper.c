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

int ft_toupper(int c)
{
	int new_character;

	new_character = c;
	if(c >= 'a' && c <= 'z')
	{
		new_character = c - 32;
	}
	return(new_character);
}
