#include <stdlib.h>

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
