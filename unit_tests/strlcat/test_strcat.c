#include "../unit_test.h"
#include<stdio.h>
#include<bsd/string.h>

void test_strlcat(char *dest, const char *src, char *origin_dest, const char *origin_src, size_t size)
{
	size_t i = 0;

	size_t result = ft_strlcat(dest,src,size);
	size_t expected = strlcat(origin_dest, origin_src, size);

	if(result != expected)
	{
		printf("Return Error\n\tResult   %lu\n\tExpected %lu\n",result, expected);
	}

	while (i < size && origin_dest[i] != '\0')
	{
		if(dest[i] != origin_dest[i])
		{
			printf("Return Error\n\tResult   %c\n\tExpected %c\n", dest[i], origin_dest[i]);
			return;
		}
		i++;
	}
	printf("Return Ok %s %s\n", origin_dest, dest);
}

int main()
{

	char destiny[40] = "meu ";
	char original_destiny[40] = "meu ";
	test_strlcat(destiny, "testezinho", original_destiny,"testezinho", 14);

	char destiny_s[14] = "banana";
	char original_destiny_s[14] = "banana";
	test_strlcat(destiny_s, "banana", original_destiny_s,"banana", 13);

	char destiny_t[20] = "Nezuko \0@@@@@@@@@@@";
	char original_destiny_t[20] = "Nezuko \0@@@@@@@@@@@";
	test_strlcat(destiny_t, "chan", original_destiny_t,"chan", 17);

	test_strlcat(destiny_t, "chan", original_destiny_t,"chan",0);
}
