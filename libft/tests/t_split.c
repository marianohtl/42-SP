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
