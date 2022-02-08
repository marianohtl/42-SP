/* ********************************************************************************* */
/*                                                                  /\_____/\        */
/*   ft_calloc.c                                                   /  o   o  \       */
/*                                                                ( ==  ^  == )      */
/*   Re-code the function calloc.                                  )         (       */
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

void *ft_calloc(unsigned int nmenb, unsigned int size){
	void* result = malloc(nmenb * size);
	return result;
}
