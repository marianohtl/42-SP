
#include <ctype.h>
#include <string.h>
#include <stdio.h>

void *ft_memset(void *s, int c, unsigned int n)
{
	unsigned int index;
	index = 0;
	while (index < n)
	{
		((unsigned char *)s)[index] = c;
		index = index + 1;
	}
	return s;
}

int main(void)
{

	char word[12] = "Hello There";
	char word2[14] = "Little Kittens";
	char word3[8] = "Unicorn";

	ft_memset(word, '!', 4);
	printf("Hello There: %s\n", word);

	ft_memset(word2, '*', 18);
	printf("Little Kittens: %s\n", word2);

	ft_memset(word3, '*', 0);
	printf("Unicorn: %s\n", word3);

	memcpy(word3, "Unicorn", 8);
	ft_memset(word3, 128, 3);
	printf("Unicorn: %s\n", word3);

	memcpy(word3, "Uni\0orn", 8);
	ft_memset(word3, '*', 4);
	printf("Unicorn: %s\n", word3);

	// memcpy(word3, "Unicorn", 8);
	// ft_memset(word3, '*', -1);
	// printf("Unicorn: %s\n", word3);

	printf("######################################################\n");

	printf("Testando com a função original:\n");

	memcpy(word, "Hello There", 12);
	memcpy(word2, "Little Kittens", 14);
	memcpy(word3, "Unicorn", 8);

	memset(word, '!', 4);
	printf("Hello There: %s\n", word);

	memset(word2, '*', 18);
	printf("Little Kittens: %s\n", word2);

	memset(word3, '*', 0);
	printf("Unicorn: %s\n", word3);

	memcpy(word3, "Unicorn", 8);
	memset(word3, 128, 3);
	printf("Unicorn: %s\n", word3);

	memcpy(word3, "Uni\0orn", 8);
	memset(word3, '*', 4);
	printf("Unicorn: %s\n", word3);

	// memcpy(word3, "Unicorn", 8);
	// memset(word3, '*', -1);
	// printf("Unicorn: %s\n", word3);

	return 0;
}
