#include <string.h>

void *ft_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned int index;
	index = 0;
	while (index < n)
	{
		((unsigned char *)dest)[index] = ((unsigned char *)src)[index];
		index = index + 1;
	}
	return dest;
}

int main(void)
{
	char src[10];
	memcpy(src, "batata", 3);

	char src2[10];
	ft_memcpy(src2, "batata", 3);

	char src3[12];
	char *src4;

	ft_memcpy(src3, "hello there", 12);
	src4 = &src3[6];

	ft_memcpy(src4, src3, 10);

	ft_memcpy(src3, "hello there", 12);
	memcpy(src4, src3, 10);

	return (0);
}
