#include "../unit_test.h"
#include<stdio.h>
#include<string.h>

void test_memcmp(const void *s1, const void *s2, unsigned int size)
{
	int i;

	int result = ft_memcmp(s1,s2,size);
	int expected = memcmp(s1,s2,size);

	if(result != expected)
	{
		printf("Return Error\n\tResult   `%d`\n\tExpected `%d`\n", result, expected);
		return;
	}

	printf("Return Ok\n");
}

int main()
{
	int test[8] = {1,300,-453,7,8,11,257,1};
	int test_cpy[8] = {1,300,-453,7,9,259,15,0};


	test_memcmp(test,test_cpy, 32);
	test_memcmp(test,test_cpy, 16);
	test_memcmp("momo incrivel","estou comparando estas duas strings",50 );
	test_memcmp("estou comparando estas duas strings","momoooo",50 );
	test_memcmp("strings iguais","strings iguais", 15);
	test_memcmp("strings iguais","strings iguais", 0);
	test_memcmp("strings iguais","strings iguais", 7);
	test_memcmp("strings iguais","strings diferentes", 7);
	test_memcmp("","",10);
	test_memcmp("gato","gatos",4);
	test_memcmp("t\200", "t\0", 2);
}
