#include<string.h>

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	unsigned int index;
	if(src < dest)
	{
		index = n;
		while (index > 0)
		{
			((unsigned char *)dest)[index - 1] = ((unsigned char *)src)[index - 1];
			index = index - 1;
		}
	}else{
		index = 0;
		while (index < n)
		{
			((unsigned char *)dest)[index] = ((unsigned char *)src)[index];
			index = index + 1;
		}
	}
	return (dest);
}

int main(void)
{
	char src[10];
	memmove(src, "batata", 3);

	char src2[10];
	ft_memmove(src2, "batata", 3);

	char src3[12];
	char *src4;

	ft_memmove(src3, "hello there", 12);
	src4 = &src3[6];

	ft_memmove(src4, src3, 10);

	ft_memmove(src3, "hello there", 12);
	memmove(src4, src3, 10);

	return (0);
}
