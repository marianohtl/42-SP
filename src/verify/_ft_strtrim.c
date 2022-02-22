
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

char* ft_strtrim(char const *s1,char const *set)
{
	char *trmstr;
	int index, sset, ss1, start, end, rstart, rend, replace, diff;
	index = 0;
	rstart = 0;

	while (set[index] != '\0')
		index++;

	sset = index;

	index = 0;
	while (s1[index] != '\0')
		index++;

	ss1 = index;

	index = 0;
	while (s1[index] != "\0" && index < sset)
	{
		if(set[index] == s1[index])
			rstart += 1;
		index++;
	}
	if(rstart == sset)
		start = index;

	index = ss1 - 1;

	diff = ss1 - sset;
	while (index >= diff)
	{
		if(set[index - diff] == s1[index])
			rend += 1;
		index--;
	}

	replace = rstart + rend;
	if (replace == sset || replace == (2*sset))
	{
		replace = ss1 - replace;
		trmstr = malloc(replace + 1);
	}
	index = 0;
	if(start != 0)
	{
		while (index <= (replace - 1))
		{
			trmstr[index] = s1[start];
			start++;
			index++;
		}
	}else{
		while (index <= (replace - 1))
		{
			trmstr[index] = s1[index];
			index++;
		}
	}
	trmstr[index] = '\0';
	return(trmstr);
}
