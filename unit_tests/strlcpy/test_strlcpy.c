#include "../unit_test.h"
#include<stdio.h>
#include<bsd/string.h>

void test_strlcpy(char *dest, const char *src, char *dest_test, const char *src_test, unsigned int size)
{
	int i = 0;

	unsigned int result = ft_strlcpy(dest,src,size);
	unsigned int expected = strlcpy(dest_test,src_test,size);

	if(result != expected)
	{
		printf("Return Error\n\tResult   %d\n\tExpected %d\n",result, expected);
	}

	while (i < size && dest[i] != '\0' && dest_test[i] != '\0' )
	{
		if(dest[i] != dest_test[i])
		{
			printf("Return Error\n\tResult   %c\n\tExpected %c\n", dest[i], dest_test[i]);
			return;
		}
		i++;
	}
	printf("Return Ok\n");

}

int main()
{

	char destiny[40];
	char original_destiny[40];
	test_strlcpy(destiny, "meu testezinho", original_destiny,"meu testezinho", 12);
	test_strlcpy(destiny, "meu testezinho", original_destiny,"meu testezinho", 15);
	test_strlcpy(destiny, "lagartixas", original_destiny,"lagartixas", 16);
	test_strlcpy(destiny, "lagartixas", original_destiny,"lagartixas", 0);
	memset(destiny, 0, 40);
	memset(destiny, 'r', 6);
	memset(original_destiny, 0, 40);
	memset(original_destiny, 'r', 6);
	test_strlcpy(destiny, "lorem ipsum dolor sit amet", original_destiny, "lorem ipsum dolor sit amet", 0);
}
