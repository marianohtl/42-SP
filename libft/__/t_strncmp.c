int ft_strncmp(const char *s1, const char *s2, unsigned int size)
{
	unsigned int index;

	index = 0;
	while (s1[index] && s2[index] && index < size)
	{
		if(s1[index] != s2[index])
		{
			return((int) (s1[index] - s2[index]));
		}
		index++;
	}

	return((int) (s1[index - 1] - s2[index - 1]));
}



int main(void)
{
	// s1[index] == 0 'SadPoyo\0' index = 7 'DelePoyo\0' size >= 7
	// s2[index] == 0 ''
	//
	int result;

	return(0);
}















