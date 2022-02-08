 /* ********************************************************************************* */
/*                                                                  /\_____/\        */
/*   ft_memchr.c                                                   /  o   o  \       */
/*                                                                ( ==  ^  == )      */
/*   Re-code the function memchr.                                  )         (       */
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

 void *ft_memchr(const void *s, int c, unsigned int n)
 {
	unsigned int index;
	char * converted;

	index = 0;
	converted = (char *) s;
	while(index < n)
	{
		if(converted[index] == c)
			return(converted[index]);
		index++;
	}
	return((char *) 0);
 }
