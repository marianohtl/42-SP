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

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	size;
	size_t	diff;
	size_t	memo;

	size = ft_strlen(s);
	diff = size - start;
	if (size < start)
		diff = 0;
	if (diff >= len)
		memo = len;
	else
		memo = diff;
	substring = malloc((memo + 1) * sizeof(*substring));
	if (substring == NULL)
		return (substring);
	if (size < start)
	{
		substring[0] = '\0';
		return (substring);
	}
	ft_strlcpy(substring, &s[start], memo + 1);
	return (substring);
}
