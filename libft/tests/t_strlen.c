#include <ctype.h>
#include <string.h>
#include <stdio.h>

unsigned int ft_strlen(char *s)
{
	unsigned int index;
	index = 0;
	while (s[index] != 0)
	{
		index = index + 1;
	}
	return index;
}

int main(void)
{
	unsigned int my_var;

	my_var = ft_strlen("Hello World");
	printf("Hello World: %d\n", my_var);

	my_var = ft_strlen("Nihao");
	printf("Nihao: %d\n", my_var);

	my_var = ft_strlen("Olá mundo");
	printf("Olá mundo: %d\n", my_var);

	my_var = ft_strlen("Oi");
	printf("Oi: %d\n", my_var);

	my_var = ft_strlen("");
	printf("string vazia: %d\n", my_var);

	my_var = ft_strlen("hello\0there");
	printf("hello\\0there: %d\n", my_var);

	printf("######################################################\n");

	printf("Testando com a função original:\n");

	my_var = ft_strlen("Hello World");
	printf("Hello World: %d\n", my_var);

	my_var = strlen("Nihao");
	printf("Nihao: %d\n", my_var);

	my_var = strlen("Olá mundo");
	printf("Olá mundo: %d\n", my_var);

	my_var = strlen("Oi");
	printf("Oi: %d\n", my_var);

	my_var = strlen("");
	printf("string vazia: %d\n", my_var);

	my_var = strlen("hello\0there");
	printf("hello\\0there: %d\n", my_var);

	return 0;
}
