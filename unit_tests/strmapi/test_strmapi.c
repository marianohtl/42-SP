#include "../unit_test.h"
#include<stdio.h>
#include <string.h>


void test_strmapi(char const *s, char(*f)(unsigned int, char), char * compare)
{
	int i = 0;
	unsigned int width;

	char *result =  ft_strmapi(s,f);
	width = ft_strlen(compare);
	if(ft_strncmp(result, compare, width) != 0 || result[width] != '\0')
	{
		printf("Return Error\n\tResult   `%s`\n\tExpected `%s`\n", result, compare);
		return;
	}

	printf("Return Ok\n");
}
char return_a(unsigned int i, char c)
{
	(void) c;
	(void) i;
	return ('a');
}

char	return_printable_plus_one(unsigned int i, char c)
{
	(void) i;
	if (c < ' ' || c > '~')
		return (c);
	if (c == '~')
		return (' ');
	return (c + 1);
}

char	return_plus_index(unsigned int i, char c)
{
	return ((char) (c + i));
}

int	main(void)
{
	char	input0[] = "Eu quero ver,\n\tvoce me\tchamar de amendoim.";
	char	input1[] = "Eu quero ver,\n\tvoce me\tchamar de amendoim.";
	char	input2[] = "Gatinhos";
	char	input3[] = "";

	test_strmapi(input0, return_a, "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
	test_strmapi(input1, return_printable_plus_one, "Fv!rvfsp!wfs-\n\twpdf!nf\tdibnbs!ef!bnfoepjn/");
	test_strmapi(input2, return_plus_index, "Gbvlrmuz");
	test_strmapi(input3, return_a, "");
}

