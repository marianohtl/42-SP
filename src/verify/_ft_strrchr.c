/* ********************************************************************************* */
/*                                                                  /\_____/\        */
/*   ft_strrchr.c                                                  /  o   o  \       */
/*                                                                ( ==  ^  == )      */
/*   Re-code the function strrchr.                                 )         (       */
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

char * ft_strrchr (const char *string, int c)
{
	unsigned int index;
	unsigned int length;
	char convert_c;

	index = 0;
	while (string[index])
		index++;

	length = index;
	index = 0;
	convert_c = (char) c;
	while (string[index])
	{
		if (string[length] == convert_c)
			return(&string[length]);

		length--;
		index++;
	}
	return((char *) 0);
}
