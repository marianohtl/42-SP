/* ********************************************************************************* */
/*                                                                  /\_____/\        */
/*   ft_strchr.c                                                  /  o   o  \       */
/*                                                                ( ==  ^  == )      */
/*   Re-code the function strchr.                                 )         (       */
/*   These function do not need any external functions.           (           )      */
/*                                                               ( (  )   (  ) )     */
/*                                                              (__(__)___(__)__)    */
/*                                                                                   */
/* ********************************************************************************* */
/*
     Checks for an alphabetic character; in the standard "C" locale, it is equivalent
	 to (isupper(c) || islower(c)).

	 Checa se o parâmetro recebido é um caracter alfabético.
*/

char * ft_strchr (const char *string, int c)
{
	unsigned int index;
	char convert_c;
	char *occurrency;

	convert_c = (char) c;
	index = 0;
	while (string[index])
	{
		if (string[index] == convert_c)
		{
			occurrency = &string[index];
			return(occurrency);
		}
		index++;
	}
	return((char *) 0);
}
