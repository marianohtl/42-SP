char *ft_strmapi(char const *s, char(*f)(unsigned int, char)){
	int index;
	char *result;

	index = 0;

	while(s[index] != '\0')
		index++;

	result = malloc(index + 1);
	index = 0;
	while(s[index] != '\0')
	{
		result[index] = f(index, s[index]);
		index++;
	}
	result[index] = '\0';

	return(result);
}
