/* ********************************************************************************* */
/*                                                                  /\_____/\        */
/*   ft_split.c                                                    /  o   o  \       */
/*                                                                ( ==  ^  == )      */
/*   Re-code the function split.                                   )         (       */
/*   These function do not need any external functions.           (           )      */
/*                                                               ( (  )   (  ) )     */
/*                                                              (__(__)___(__)__)    */
/*                                                                                   */
/* ********************************************************************************* */
/*
ft_split.c

Parameters
#1 The word to be split.
#2 The delimiter character.

Return Value
The array of new strings resulting from the split.
NULL if the allocation fails.

External Functions
malloc, free

Description
Allocates (with mallloc(3)) and returns an array of strings obtained
by splitting 's' using the character 'c' as a delimiter. The array must
be ended by a NULL pointer.
*/
#include"libft.h"
#include<stdlib.h>

int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count_words;
	int	found_word;

	count_words = 0;
	i = 0;
	found_word = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			found_word = 1;
		if (s[i] == c && found_word == 1)
		{
			count_words += 1;
			found_word = 0;
		}
		i++;
	}
	if (found_word == 1)
		count_words += 1;
	return (count_words);
}

int	ft_add_word(char **words, const char *s, int size, int i_word)
{
	char	*word;

	word = malloc((size + 1) * sizeof(*word));
	if (words == NULL)
	{
		words[i_word] = word;
		return (i_word + 1);
	}
	ft_strlcpy(word, s, size + 1);
	words[i_word] = word;
	return (i_word + 1);
}

void	ft_add_words(char **words, const char *s, char c)
{
	int		i_str;
	int		i_word;
	int		size_str;

	i_str = 0;
	i_word = 0;
	size_str = 0;
	while (s[i_str] != '\0')
	{
		if (s[i_str] != c)
			size_str += 1;
		else
		{
			if (size_str != 0)
				i_word = ft_add_word(words, &s[i_str - size_str], size_str, i_word);
			size_str = 0;
		}
		i_str++;
	}
	if (size_str != 0)
		i_word = ft_add_word(words, &s[i_str - size_str], size_str, i_word);
	words[i_word] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**words;

	words = malloc((ft_count_words(s, c) + 1) * sizeof(*words));
	if (words == NULL)
		return (words);
	ft_add_words(words, s, c);
	return (words);
}
