
#include "../unit_test.h"
#include<stdio.h>
#include <string.h>


void test_striteri(char *s, void (*f)(unsigned int, char*), char * compare)
{
	int i = 0;
	unsigned int width;

	ft_striteri(s,f);
	width = ft_strlen(compare);
	if(ft_strncmp(s,compare,width) != 0)
	{
		printf("Return Error\n\tResult   `%s`\n\tExpected `%s`\n", s, compare);
		return;
	}

	printf("Return Ok\n");
}
void return_a(unsigned int i, char *s)
{
	s[i] = 'a';
}

void	return_printable_plus_one(unsigned int i, char *s)
{
	if (s[i] >= ' ' && s[i] < '~')
		s[i] = s[i] + 1;
	else if (s[i] == '~')
		s[i] = ' ';
}

void	return_plus_index(unsigned int i, char *s)
{
	s[i] = s[i] + i;
}

int	main(void)
{
	char	input0[] = "Eu quero ver,\n\tvoce me\tchamar de amendoim.";
	char	input1[] = "Eu quero ver,\n\tvoce me\tchamar de amendoim.";
	char	input2[] = "Gatinhos";
	char	input3[] = "";

	test_striteri(input0, return_a, "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
	test_striteri(input1, return_printable_plus_one, "Fv!rvfsp!wfs-\n\twpdf!nf\tdibnbs!ef!bnfoepjn/");
	test_striteri(input2, return_plus_index, "Gbvlrmuz");
	test_striteri(input3, return_a, "");
}

