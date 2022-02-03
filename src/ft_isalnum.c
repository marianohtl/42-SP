/* ********************************************************************************* */
/*                                                                  /\_____/\        */
/*   ft_isalnum.c                                                  /  o   o  \       */
/*                                                                ( ==  ^  == )      */
/*   Re-code the function isalnum.                                 )         (       */
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

int ft_isalnum(int c)
{
	if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')) || ((c >= '0') && (c <= '9')))
	{
		return (2048);
	}
	return (0);
}
