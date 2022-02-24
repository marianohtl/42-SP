#include "../unit_test.h"
#include<stdio.h>
#include<stdlib.h>

void test_calloc(unsigned int nmenb, unsigned int size)
{
	int i = 0;
	int n = nmenb * size;

	char * result = (char *) ft_calloc(nmenb, size);
	char * expected = (char *) calloc(nmenb, size);


	if((result == (void * )0)||(expected == (void *)0))
	{
		printf("Uma das duas funções retornaram nullo, não é possível testar a função.");
		return;
	}

	while (i < n)
	{
		if(result[i] != expected[i])
		{
			printf("Return Error\n\tResult   %c\n\tExpected %c\n", result[i], expected[i]);
			return;
		}
		i++;
	}
	printf("Return Ok\n");

}

int main()
{

	test_calloc(1,4);
	test_calloc(42,42);
	test_calloc(10,2);
	test_calloc(10,0);
	test_calloc(0,10);
	test_calloc(0,0);
	test_calloc(200,200);

}
