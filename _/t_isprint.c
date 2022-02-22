#include <ctype.h>
#include <stdio.h>

int ft_isprint(int c)
{
	if (((c >= 32) && (c <= 126)))
	{
		return (16384);
	}
	return (0);
}

int main(void)
{
	int my_var;
	printf("Testando com a minha função:\n");

	my_var = ft_isprint(10);
	printf(" 10: %d\n", my_var);

	my_var = ft_isprint(0);
	printf(" 0: %d\n", my_var);

	my_var = ft_isprint(150);
	printf(" 150: %d\n", my_var);

	my_var = ft_isprint(84);
	printf(" 84: %d\n", my_var);

	my_var = ft_isprint('a');
	printf(" a: %d\n", my_var);

	my_var = ft_isprint('Q');
	printf(" Q: %d\n", my_var);

	my_var = ft_isprint('1');
	printf(" 1: %d\n", my_var);

	my_var = ft_isprint(' ');
	printf(" espaço em branco: %d\n", my_var);

	my_var = ft_isprint('/');
	printf(" /: %d\n", my_var);

	my_var = ft_isprint('#');
	printf(" #: %d\n", my_var);

	//divergência
	//my_var = ft_isprint(-15453);
	//printf(" -15453 ã: %d\n", my_var);

	my_var = ft_isprint(-15447);
	printf(" -15447 é: %d\n", my_var);

	my_var = ft_isprint(128);
	printf(" Ç: %d\n", my_var);

	printf("######################################################\n");

	printf("Testando com a função original:\n");

	my_var = isprint(10);
	printf(" 10: %d\n", my_var);

	my_var = isprint(0);
	printf(" 0: %d\n", my_var);

	my_var = isprint(150);
	printf(" 150: %d\n", my_var);

	my_var = isprint(84);
	printf(" 84: %d\n", my_var);

	my_var = isprint('a');
	printf(" a: %d\n", my_var);

	my_var = isprint('Q');
	printf(" Q: %d\n", my_var);

	my_var = isprint('1');
	printf(" 1: %d\n", my_var);

	my_var = isprint(' ');
	printf(" espaço em branco: %d\n", my_var);

	my_var = isprint('/');
	printf(" /: %d\n", my_var);

	my_var = isprint('#');
	printf(" #: %d\n", my_var);

	//divergência
	//my_var = isprint(-15453);
	//printf(" -15453 ã: %d\n", my_var);

	my_var = isprint(-15447);
	printf(" -15447 é: %d\n", my_var);

	my_var = isprint(128);
	printf(" Ç: %d\n", my_var);
}
