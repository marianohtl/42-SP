#include <ctype.h>
#include <stdio.h>

int ft_isascii(int c)
{
	if (((c >= 0) && (c <= 127)))
	{
		return (1);
	}
	return (0);
}

int main(void)
{
	int my_var;
	printf("Testando com a minha função:\n");

	my_var = ft_isascii(10);
	printf(" 10: %d\n", my_var);

	my_var = ft_isascii(0);
	printf(" 0: %d\n", my_var);

	my_var = ft_isascii(150);
	printf(" 150: %d\n", my_var);

	my_var = ft_isascii(84);
	printf(" 84: %d\n", my_var);

	my_var = ft_isascii('a');
	printf(" a: %d\n", my_var);

	my_var = ft_isascii('Q');
	printf(" Q: %d\n", my_var);

	my_var = ft_isascii('1');
	printf(" 1: %d\n", my_var);

	my_var = ft_isascii(' ');
	printf(" espaço em branco: %d\n", my_var);

	my_var = ft_isascii('/');
	printf(" /: %d\n", my_var);

	my_var = ft_isascii('#');
	printf(" #: %d\n", my_var);

	my_var = ft_isascii(-10);
	printf(" -10: %d\n", my_var);

	my_var = ft_isascii(-15453);
	printf(" -15453 ã: %d\n", my_var);

	//divergência
	my_var = ft_isascii(-15447);
	printf(" -15447 é: %d\n", my_var);

	printf("######################################################\n");

	printf("Testando com a função original:\n");

	my_var = isascii(10);
	printf(" 10: %d\n", my_var);

	my_var = isascii(0);
	printf(" 0: %d\n", my_var);

	my_var = isascii(150);
	printf(" 150: %d\n", my_var);

	my_var = isascii(84);
	printf(" 84: %d\n", my_var);

	my_var = isascii('a');
	printf(" a: %d\n", my_var);

	my_var = isascii('Q');
	printf(" Q: %d\n", my_var);

	my_var = isascii('1');
	printf(" 1: %d\n", my_var);

	my_var = isascii(' ');
	printf(" espaço em branco: %d\n", my_var);

	my_var = isascii('/');
	printf(" /: %d\n", my_var);

	my_var = isascii('#');
	printf(" #: %d\n", my_var);

	my_var = isascii(-10);
	printf(" -10: %d\n", my_var);

	my_var = isascii(-15453);
	printf(" -15453 ã: %d\n", my_var);

	my_var = isascii(-15447);
	printf(" -15447 é: %d\n", my_var);
}
