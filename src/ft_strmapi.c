
#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		index;
	char	*result;

	result = malloc((ft_strlen(s) + 1) * sizeof(*result));
	if(result == NULL)
		return (result);
	index = 0;
	while (s[index] != '\0')
	{
		result[index] = f(index, s[index]);
		index++;
	}
	result[index] = '\0';
	return (result);
}
