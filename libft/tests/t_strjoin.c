/* ********************************************************************************* */
/*                                                                  /\_____/\        */
/*   ft_strjoin.c                                                  /  o   o  \       */
/*                                                                ( ==  ^  == )      */
/*   Re-code the function strlcat.                                 )         (       */
/*   These function do not need any external functions.           (           )      */
/*                                                               ( (  )   (  ) )     */
/*                                                              (__(__)___(__)__)    */
/*                                                                                   */
/* ********************************************************************************* */

char *ft_strjoin(char const *s1, char const *s2)
{
	char *concat;
	int size, is1,is2;
	size = 0;
	is1 = 0;
	is2 = 0;
	while (s1[is1] != '\0')
		is1++;
	size = is1;

	while (s2[is2] != '\0')
		is2++;
	size += is2;

	if(size == 0)
		return((char *) 0);

	concat = malloc(size + 1);
	while (s1[is1] != '\0')
	{
		concat[is2] = s1[is1];
		is1++;
		is2++;
	}
	is1 = 0;
	while (s2[is1] != '\0')
	{
		concat[is2] = s1[is1];
		is1++;
		is2++;
	}
	concat[is2] = '\0';
	return concat;
}
