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
#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*concat;
	int		all_size;

	all_size = ft_strlen(s1);
	all_size += ft_strlen(s2);
	concat = malloc((all_size + 1) * sizeof(*concat));
	if (concat == NULL)
		return (concat);
	ft_strlcpy(concat, s1, all_size + 1);
	ft_strlcat(concat, s2, all_size + 1);
	return (concat);
}
