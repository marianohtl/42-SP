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
