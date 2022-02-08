/* ********************************************************************************* */
/*                                                                  /\_____/\        */
/*   ft_strdup.c                                                   /  o   o  \       */
/*                                                                ( ==  ^  == )      */
/*   Re-code the function strdup.                                  )         (       */
/*   Using the function malloc.                                   (           )      */
/*                                                               ( (  )   (  ) )     */
/*                                                              (__(__)___(__)__)    */
/*                                                                                   */
/* ********************************************************************************* */
/*
     Checks for an alphabetic character; in the standard "C" locale, it is equivalent
	 to (isupper(c) || islower(c)).

	 Checa se o parâmetro recebido é um caracter alfabético.
*/

char *ft_strdup(const char *s)
{
	char *result;
	int index, size;
	size = 0;
	index = 0;
	while(s[index] != '\0')
	{
		index++;
		size++;
	}

	result = malloc(size);
	index = 0;
	while(s[index] != '\0')
	{
		result[index] = s[index];
		index++;
	}
	result[index] = '\0';
	return result[0];
}
