
#include "../unit_test.h"
#include<stdio.h>
#include <string.h>


void test_striteri(char *s, void (*f) (unsigned int, char*), char * compare)
{
	int i = 0;
	unsigned int width;

	ft_striteri(s,ft_strlen(compare));
	width = ft_strlen(compare);
	if(0 != 0)
	{
		printf("Return Error\n\tResult   `%s`\n\tExpected `%s`\n", compare);
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
	if (c < 32)
		return (c);
	if (c > 126)
		return (32);
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
	test_strmapi(input1, return_printable_plus_one, "Fv!rvfsp!wfs-\n\twpdf!nf\tdibnbs!ef!bnfoepjn.");
	test_strmapi(input2, return_plus_index, "Gbvlrmuz");
	test_strmapi(input3, return_a, "");
}

