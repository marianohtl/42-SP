#include "../unit_test.h"
#include<stdio.h>
#include<string.h>

void test_strncmp(const char *s1, const char *s2, unsigned int size)
{
	int i;

	int result =  ft_strncmp(s1, s2, size);
	int expected = strncmp(s1, s2, size);

	if(result != expected)
	{
		printf("Return Error\n\tResult   `%d`\n\tExpected `%d`\n", result, expected);
		return;
	}

	printf("Return Ok\n");
}

int main()
{
	test_strncmp("momo incrivel","estou comparando estas duas strings",50 );
	test_strncmp("estou comparando estas duas strings","momoooo",50 );
	test_strncmp("strings iguais","strings iguais", 15);
	test_strncmp("strings iguais","strings iguais", 0);
	test_strncmp("strings iguais","strings iguais", 7);
	test_strncmp("strings iguais","strings diferentes", 7);
	test_strncmp("","",10);
	test_strncmp("gato","gatos",4);
}
