/* ********************************************************************************* */
/*                                                                  /\_____/\        */
/*   ft_strjoin.c                                                  /  o   o  \       */
/*                                                                ( ==  ^  == )      */
/*   Parameters                                                    )         (       */
/*   #1 The prefix string.                                        (           )      */
/*   #2 The suffix string.                                       ( (  )   (  ) )     */
/*                                                              (__(__)___(__)__)    */
/*   Return Value                                                                    */
/*   The new string. NULL if the allocation fails.                                   */
/*                                                                                   */
/*   External Functions                                                              */
/*   malloc                                                                          */
/*                                                                                   */
/*   Description                                                                     */
/*                                                                                   */
/*    Allocates (with mallloc(3)) and returns a new string, which is the result      */
/*    of the concatenation of 's1' and 's2'.                                         */
/*                                                                                   */
/* ********************************************************************************* */
#include<stdlib.h>
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
