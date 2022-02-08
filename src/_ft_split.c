/* ********************************************************************************* */
/*                                                                  /\_____/\        */
/*   ft_split.c                                                  /  o   o  \       */
/*                                                                ( ==  ^  == )      */
/*   Re-code the function split.                                 )         (       */
/*   These function do not need any external functions.           (           )      */
/*                                                               ( (  )   (  ) )     */
/*                                                              (__(__)___(__)__)    */
/*                                                                                   */
/* ********************************************************************************* */
/*
ft_split.c

Parameters
#1 The string to be split.
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

char **ft_split(char const *s, char c)
{
	int i,ii, sizeall, sizestr;
	char *allstring, *string;

	i = 0;
	while(s[i] != '\0')
	{
		if(s[i] == c)
			sizeall += 1;

		i++;
	}

	*allstring = malloc(sizeall + 2);
	i = 0;
	while (s[i] != '\0')
	{
		if(s[i] != c)
		{
			sizestr+= 1;
		}else{
			string = malloc(sizestr);
			while (ii < i)
			{
				string[ii] = s[ii];
				ii++;
			}
			ii++;
			sizestr = 0;
			allstring[i] = string;
		}
		i++;
	}
	allstring[i] = '\0';
	return(allstring);
}
