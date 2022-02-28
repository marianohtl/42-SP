/* ********************************************************************************* */
/*                                                                  /\_____/\        */
/*   ft_strlen.c                                                   /  o   o  \       */
/*                                                                ( ==  ^  == )      */
/*   Re-code the function strlen.                                  )         (       */
/*   These function do not need any external functions.           (           )      */
/*                                                               ( (  )   (  ) )     */
/*                                                              (__(__)___(__)__)    */
/*                                                                                   */
/* ********************************************************************************* */
/*
     The  strlen() function calculates the length of the string pointed to
	 by s, excluding the terminating null byte ('\0').

	 Calcula o tamanho do ponteiro de string passado no parâmetro s, não consi-
	 derando o byte nulo final \0.
*/

unsigned int ft_strlen(const char *s)
{
	unsigned int index;
	index = 0;
	while (s[index] != 0)
	{
		index = index + 1;
	}
	return index;
}
