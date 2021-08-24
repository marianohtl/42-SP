#include <ctype.h>
#include <stdio.h>

int ft_isalpha(int c)
{
	if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')))
	{
		return (1024);
	}
	return (0);
}

int main(void)
{
	int my_var;

	printf("Testando com a minha função:\n");

	my_var = ft_isalpha(10);
	printf("Testando 10: %d\n", my_var);

	my_var = ft_isalpha(0);
	printf("Testando 0: %d\n", my_var);

	my_var = ft_isalpha(150);
	printf("Testando 150: %d\n", my_var);

	my_var = ft_isalpha(84);
	printf("Testando 84: %d\n", my_var);

	my_var = ft_isalpha('a');
	printf("Testando a: %d\n", my_var);

	my_var = ft_isalpha('Q');
	printf("Testando Q: %d\n", my_var);

	my_var = ft_isalpha('1');
	printf("Testando 1: %d\n", my_var);

	my_var = ft_isalpha(' ');
	printf("Testando espaço em branco: %d\n", my_var);

	my_var = ft_isalpha('/');
	printf("Testando /: %d\n", my_var);

	my_var = ft_isalpha('#');
	printf("Testando #: %d\n", my_var);

	my_var = ft_isalpha(-15453);
	printf("Testando -15453 ã: %d\n", my_var);

	my_var = ft_isalpha(-15447);
	printf("Testando -15447 é: %d\n", my_var);

	printf("######################################################\n");

	printf("Testando com a função original:\n");

	my_var = isalpha(10);
	printf("Testando 10: %d\n", my_var);

	my_var = isalpha(0);
	printf("Testando 0: %d\n", my_var);

	my_var = isalpha(150);
	printf("Testando 150: %d\n", my_var);

	my_var = isalpha(84);
	printf("Testando 84: %d\n", my_var);

	my_var = isalpha('a');
	printf("Testando a: %d\n", my_var);

	my_var = isalpha('Q');
	printf("Testando Q: %d\n", my_var);

	my_var = isalpha('1');
	printf("Testando 1: %d\n", my_var);

	my_var = isalpha(' ');
	printf("Testando espaço em branco: %d\n", my_var);

	my_var = isalpha('/');
	printf("Testando /: %d\n", my_var);

	my_var = isalpha('#');
	printf("Testando #: %d\n", my_var);

	my_var = isalpha(-15453);
	printf("Testando -15453 ã: %d\n", my_var);

	my_var = isalpha(-15447);
	printf("Testando -15447 é: %d\n", my_var);

	return (0);
}
