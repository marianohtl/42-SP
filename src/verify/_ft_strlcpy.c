/* ********************************************************************************* */
/*                                                                  /\_____/\        */
/*   ft_strlcpy.c                                                  /  o   o  \       */
/*                                                                ( ==  ^  == )      */
/*   Re-code the function strlcpy.                                 )         (       */
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

unsigned int ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int index;

	index = 0;

	while(index < (size - 1) && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	while (src[index] != '\0')
	{
		index = index + 1;
	}
	return(index);
}
