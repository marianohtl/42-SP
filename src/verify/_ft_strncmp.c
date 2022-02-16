/* ********************************************************************************* */
/*                                                                  /\_____/\        */
/*   ft_strncmp.c                                                  /  o   o  \       */
/*                                                                ( ==  ^  == )      */
/*   Re-code the function strncmp.                                 )         (       */
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

int ft_strncmp(const char *s1, const char *s2, unsigned int size)
{
	unsigned int index;

	index = 0;
	while (s1[index] && s2[index] && index < size)
	{
		if(s1[index] != s2[index])
		{
			return((int) (s1[index] - s2[index]));
		}
		index++;
	}

	return((int) (s1[index - 1] - s2[index - 1]));
}

