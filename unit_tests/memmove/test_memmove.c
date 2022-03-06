#include "../unit_test.h"
#include<stdio.h>
#include<string.h>

void test_memmove(void *dest, const void *src, void *dest_test, void *src_test , size_t n)
{
	size_t i;
	i = 0;

	char *result = (char*)ft_memmove(dest, src, n);
	char *expected = (char*)memmove(dest_test, src_test, n);


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
	char f_str[100];
	char tf_str[100];

	char s_str[100] = "Nezuko Chan";
	char ts_str[100] = "Nezuko Chan";

	char t_str[100] = "Testando pelo outro lado";
	char tt_str[100] = "Testando pelo outro lado";

	test_memmove(f_str, "Tatakae Tatakae Tatakae Tatakae", tf_str,"Tatakae Tatakae Tatakae Tatakae", 21);
	test_memmove(f_str, "chuck chuck chuck", tf_str,"chuck chuck chuck", 10);
	test_memmove(f_str, "chuck chuck chuck", tf_str,"chuck chuck chuck", 0);
	test_memmove(f_str, "\n\t\0aaaaa", tf_str,"\n\t\0aaaaa", 11);
	//sobrescrita
	test_memmove(s_str, s_str + 2, ts_str, ts_str + 2,10);
	test_memmove(t_str+ 10, t_str , tt_str+ 10, tt_str,14);
}
