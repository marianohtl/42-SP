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
			return((void *) &converted[index]);
		index++;
	}
	return((char *) 0);
 }
