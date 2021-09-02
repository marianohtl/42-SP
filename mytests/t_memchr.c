 void *ft_memchr(const void *s, int c, unsigned int n)
 {
	unsigned int index;
	char * converted;

	index = 0;
	converted = (char *) s;
	while(index < n)
	{
		if(converted[index] == c)
			return(converted[index]);
		index++;
	}
	return((char *) 0);
 }
