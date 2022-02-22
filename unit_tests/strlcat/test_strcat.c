#include "../unit_test.h"
#include<stdio.h>
#include<bsd/string.h>

void test_strlcat(char *dest, const char *src, char *origin_dest, const char *origin_src, unsigned int size)
{
	int i = 0;

	unsigned int result = ft_strlcat(dest,src,size);
	unsigned int expected = strlcat(origin_dest, origin_src, size);

	if(result != expected)
	{
		printf("Return Error\n\tResult   %d\n\tExpected %d\n",result, expected);
	}

	while (i < size&& dest[i] != '\0' && origin_dest[i] != '\0')
	{
		if(dest[i] != origin_dest[i])
		{
			printf("Return Error\n\tResult   %c\n\tExpected %c\n", dest[i], origin_dest[i]);
			return;
		}
		i++;
	}
	printf("Return Ok\n");
}

int main()
{

	char destiny[40] = "meu ";
	char original_destiny[40] = "meu ";
	test_strlcat(destiny, "testezinho", original_destiny,"testezinho", 14);

	char destiny_s[14] = "Nezuko ";
	char original_destiny_s[14] = "Nezuko ";
	test_strlcat(destiny_s, "chan", original_destiny_s,"chan", 12);

	char destiny_t[20] = "Nezuko \0@@@@@@@@@@@";
	char original_destiny_t[20] = "Nezuko \0@@@@@@@@@@@";
	test_strlcat(destiny_t, "chan", original_destiny_t,"chan", 17);

	test_strlcat(destiny_t, "chan", original_destiny_t,"chan",0);
}
