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

char *ft_substr(char const *s, unsigned int start, unsigned int len)
{
	char * substring;
	int size, diff, memo, index;
	index = 0;
	size = 0;
	while (s[size] != '\0')
		size++;

	diff = size - start;

	if(diff < len)
	{
		memo = diff;
	}else{
		memo = len;
	}
	substring = malloc(memo + 1);
	while(index < memo)
	{
		substring[index] = s[start];
		index++;
		start++;
	}
	substring[memo] = '\0';
	return(substring);
}

