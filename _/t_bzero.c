#include <strings.h>
#include <stdio.h>

void ft_bzero(void *s, unsigned int n)
{
	int index;
	index = 0;
	while (index < n)
	{
		((unsigned char *)s)[index] = '\0';
		index++;
	}
}

int main(void)
{
	char word[12] = "Hello There";
	char word2[14] = "Little Kittens";
	char word3[8] = "Unicorn";

	ft_bzero(word, 4);
	printf("Hello There: %s\n", word);

	ft_bzero(word2, 18);
	printf("Little Kittens: %s\n", word2);

	ft_bzero(word3, 0);
	printf("Unicorn: %s\n", word3);

	memcpy(word3, "Unicorn", 8);
	ft_bzero(word3, 3);
	printf("Unicorn: %s\n", word3);

	memcpy(word3, "Uni\0orn", 8);
	ft_bzero(word3, 4);
	printf("Unicorn: %s\n", word3);

	printf("######################################################\n");

	printf("Testando com a função original:\n");

	memcpy(word, "Hello There", 12);
	memcpy(word2, "Little Kittens", 14);
	memcpy(word3, "Unicorn", 8);

	bzero(word, 4);
	printf("Hello There: %s\n", word);

	bzero(word2, 18);
	printf("Little Kittens: %s\n", word2);

	bzero(word3, 0);
	printf("Unicorn: %s\n", word3);

	memcpy(word3, "Unicorn", 8);
	bzero(word3, 3);
	printf("Unicorn: %s\n", word3);

	memcpy(word3, "Uni\0orn", 8);
	bzero(word3, 4);
	printf("Unicorn: %s\n", word3);

	return (0);
}
