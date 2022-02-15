#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <bsd/string.h>

unsigned int ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int index;

	index = 0;

	while(index < (size - 1) && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	while (src[index] != '\0')
	{
		index = index + 1;
	}
	return(index);
}

int main(void)
{
	unsigned int return_size;
	unsigned int return_size_original;

	char src[12] = "Hello There";
	char dest[20] = "General Kenobi";

	char src2[14] = "Little Kittens";
	char dest2[8] = "Unicorn";

	char src3[15] = "General Kenobi";
	char dest3[21] = "HelloHelloHelloHello";

	return_size = ft_strlcpy(dest,src,5);
	memcpy(src, "Hello There", 12);
	memcpy(dest, "General Kenobi", 15);
	return_size_original = strlcpy(dest,src,5);

	return_size = ft_strlcpy(dest2,src2,14);
	memcpy(src2, "Little Kittens", 14);
	memcpy(dest2, "Unicorn", 8);
	return_size_original = strlcpy(dest2,src2,14);

	memcpy(src3, "General Kenobi", 15);
	memcpy(dest3, "HelloHelloHelloHello", 21);
	return_size = ft_strlcpy(dest3,src3,20);
	memcpy(src3, "General Kenobi", 15);
	memcpy(dest3, "HelloHelloHelloHello", 21);
	return_size_original = strlcpy(dest3,src3,20);

	//0
	//5
	//11
	//20

	return(0);
}
