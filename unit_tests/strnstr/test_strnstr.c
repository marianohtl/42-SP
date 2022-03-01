#include "../unit_test.h"
#include<stdio.h>
#include<bsd/string.h>

void test_strnstr(const char * big, const char *little,unsigned int len)
{
	int i;

	char *result = (char*)ft_strnstr(big,little,len);
	char *expected = (char*)strnstr(big,little,len);

	if(result != expected)
	{
		printf("Return Error\n\tResult   `%s`\n\tExpected `%s`\n", result, expected);
		return;
	}

	printf("Return Ok\n");
}

int main()
{
	test_strnstr("batata", "bata",7);
	test_strnstr("barata", "barara",10);
	test_strnstr("barata", "barara",4);
	test_strnstr("","",3);
	test_strnstr("gatosarrombadinhos","arrombadinhosfofos",3);
	test_strnstr("lorem ipsum dolor sit amet", "dolor", 15);

}
