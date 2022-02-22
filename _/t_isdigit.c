#include <ctype.h>
#include <stdio.h>

int ft_isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (2048);
	}
	return (0);
}

int main(void)
{
	int my_var;

	printf("Testando com a minha função:\n");

	my_var = ft_isdigit('1');
	printf("Testando 1: %d\n", my_var);

	my_var = ft_isdigit('4');
	printf("Testando 4: %d\n", my_var);

	my_var = ft_isdigit('a');
	printf("Testando a: %d\n", my_var);

	my_var = ft_isdigit(5);
	printf("Testando 5: %d\n", my_var);

	my_var = ft_isdigit(53);
	printf("Testando 53: %d\n", my_var);

	my_var = ft_isdigit(57);
	printf("Testando 57: %d\n", my_var);

	my_var = ft_isdigit(50);
	printf("Testando 50: %d\n", my_var);

	my_var = ft_isdigit(150);
	printf("Testando 150: %d\n", my_var);

	my_var = ft_isdigit(93);
	printf("Testando 93: %d\n", my_var);

	printf("######################################################\n");

	printf("Testando com a função original:\n");

	my_var = isdigit('1');
	printf("Testando 1: %d\n", my_var);

	my_var = isdigit('4');
	printf("Testando 4: %d\n", my_var);

	my_var = isdigit('a');
	printf("Testando a: %d\n", my_var);

	my_var = isdigit(5);
	printf("Testando 5: %d\n", my_var);

	my_var = isdigit(53);
	printf("Testando 53: %d\n", my_var);

	my_var = isdigit(57);
	printf("Testando 57: %d\n", my_var);

	my_var = isdigit(50);
	printf("Testando 50: %d\n", my_var);

	my_var = isdigit(150);
	printf("Testando 150: %d\n", my_var);

	my_var = isdigit(93);
	printf("Testando 93: %d\n", my_var);

	return (0);
}
