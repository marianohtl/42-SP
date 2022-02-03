#include <ctype.h>
#include <stdio.h>

int ft_isalnum(int c)
{
	if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')) || ((c >= '0') && (c <= '9')))
	{
		return (2048);
	}
	return (0);
}

int main(void)
{
	int my_var;
	printf("Testando com a minha função:\n");

	my_var = ft_isalnum(10);
	printf(" 10: %d\n", my_var);

	my_var = ft_isalnum(0);
	printf(" 0: %d\n", my_var);

	my_var = ft_isalnum(150);
	printf(" 150: %d\n", my_var);

	my_var = ft_isalnum(84);
	printf(" 84: %d\n", my_var);

	my_var = ft_isalnum('a');
	printf(" a: %d\n", my_var);

	my_var = ft_isalnum('Q');
	printf(" Q: %d\n", my_var);

	my_var = ft_isalnum('1');
	printf(" 1: %d\n", my_var);

	my_var = ft_isalnum(' ');
	printf(" espaço em branco: %d\n", my_var);

	my_var = ft_isalnum('/');
	printf(" /: %d\n", my_var);

	my_var = ft_isalnum('#');
	printf(" #: %d\n", my_var);

	my_var = ft_isalnum(128);
	printf(" Ç: %d\n", my_var);

	printf("######################################################\n");

	printf("Testando com a função original:\n");

	my_var = isalnum(10);
	printf(" 10: %d\n", my_var);

	my_var = isalnum(0);
	printf(" 0: %d\n", my_var);

	my_var = isalnum(150);
	printf(" 150: %d\n", my_var);

	my_var = isalnum(84);
	printf(" 84: %d\n", my_var);

	my_var = isalnum('a');
	printf(" a: %d\n", my_var);

	my_var = isalnum('Q');
	printf(" Q: %d\n", my_var);

	my_var = isalnum('1');
	printf(" 1: %d\n", my_var);

	my_var = isalnum(' ');
	printf(" espaço em branco: %d\n", my_var);

	my_var = isalnum('/');
	printf(" /: %d\n", my_var);

	my_var = isalnum('#');
	printf(" #: %d\n", my_var);

	my_var = isalnum(128);
	printf(" Ç: %d\n", my_var);
}
