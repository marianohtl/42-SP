/* ********************************************************************************* */
/*                                                                  /\_____/\        */
/*   ft_substr.c                                                   /  o   o  \       */
/*                                                                ( ==  ^  == )      */
/*   Allocates (with malloc(3)) and returns a substring            )         (       */
/*   from the string 's'. The substring begins at index           (           )      */
/*   'start' and is of maximum size 'len'.                       ( (  )   (  ) )     */
/*                                                              (__(__)___(__)__)    */
/*   Parameters                                                                      */
/*   #1 The string from which to create the substring.                               */
/*   #2 The start indez of the substring in the string 's'.                          */
/*   #3 The maximum length of the substring.                                         */
/*                                                                                   */
/*   Return Value: The substring. NULL if the allocation fails.                      */
/*   External Functions: malloc                                                      */
/*                                                                                   */
/* ********************************************************************************* */
/*

*/
#include<stdlib.h>
#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, unsigned int len)
{
	char			*substring;
	unsigned int	size;
	unsigned int	diff;
	unsigned int	memo;

	size = ft_strlen(s);
	diff = size - start;
	if (size < start)
		diff = 0;
	if (diff < len)
	{
		memo = diff;
	}
	else
	{
		memo = len;
	}
	substring = malloc((memo + 1) * sizeof(*substring));
	if (substring == NULL)
		return (substring);
	ft_strlcpy(substring, &s[start], memo + 1);
	return (substring);
}
