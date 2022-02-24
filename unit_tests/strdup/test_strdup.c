#include "../unit_test.h"
#include<stdio.h>
#include<string.h>

void test_strdup(const char *s)
{
	int i = 0;

	char * result = ft_strdup(s);
	char * expected = strdup(s);

	while (expected[i] || result[i])
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


	test_strdup("meu testezinho");
	test_strdup("lagartixas");
	test_strdup("");
	test_strdup("lagartixas\0tixastixastixas");


}
