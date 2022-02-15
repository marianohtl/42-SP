#include <stdlib.h>

char *ft_strdup(const char *s)
{
	char *result;
	int index, size;
	size = 0;
	index = 0;
	while(s[index] != '\0')
	{
		index++;
		size++;
	}

	result = malloc(size);
	index = 0;
	while(s[index] != '\0')
	{
		result[index] = s[index];
		index++;
	}
	result[index] = '\0';
	return result[0];
}
