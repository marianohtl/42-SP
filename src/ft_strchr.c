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
			occurrency = (char*) &string[index];
			return(occurrency);
		}
		index++;
	}
	if(string[index] == c)
	{
		occurrency = (char*) &string[index];
		return(occurrency);
	}

	return((char *) 0);
}
