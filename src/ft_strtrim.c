/* ********************************************************************************* */
/*                                                                  /\_____/\        */
/*   ft_strtrim.c                                                  /  o   o  \       */
/*                                                                ( ==  ^  == )      */
/*   Re-code the function strtrim.                                 )         (       */
/*   These function do not need any external functions.           (           )      */
/*                                                               ( (  )   (  ) )     */
/*                                                              (__(__)___(__)__)    */
/*                                                                                   */
/* ********************************************************************************* */
/*
    Checks for an alphanumeric character; it is equivalent
	to (isalpha(c) || isdigit(c)).

	Checa se o parâmetro recebido é um alfanumérico. (letras e números)


Parameters
#1 The string to be trimmed.
#2 The reference set of characters to trim.

Return Value
The trimmed string. NULL if the allocation fails.

External Functions
malloc

Description
Allocates (with mallloc(3)) and returns a copy of 's1' with the characters
specified in 'set' removed from the beginning and the end of the string.
*/
#include"libft.h"
#include<stdlib.h>

int	ft_str_start(char const *s1, char const *set)
{
	int		index;
	char	*equal;

	index = 0;
	equal = ft_strchr(set, s1[index]);
	while (equal != NULL && s1[index])
	{
		index++;
		equal = ft_strchr(set, s1[index]);
	}
	return (index);
}

int	ft_str_end(char const *s1, char const *set, int start)
{
	int		index;
	char	*equal;

	index = ft_strlen(s1) - 1;
	equal = ft_strchr(set, s1[index]);
	while (equal != NULL && index >= start)
	{
		index--;
		equal = ft_strchr(set, s1[index]);
	}
	return (index);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str_trim;
	int		start;
	int		end;
	int		size_trim;

	start = ft_str_start(s1, set);
	end = ft_str_end(s1, set, start);
	size_trim = end - start + 2;
	str_trim = malloc(size_trim * sizeof(*str_trim));
	if (str_trim == NULL)
		return (str_trim);
	ft_strlcpy(str_trim, &s1[start], size_trim);
	return (str_trim);
}
