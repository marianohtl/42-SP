#include <bsd/string.h>

unsigned int ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int index;
	unsigned int size_src;
	unsigned int size_dest;
	unsigned int all_size;

	index = 0;
	size_src = 0;
	size_dest = 0;
	while (src[size_src])
		size_src++;

	while (dest[size_dest])
		size_dest++;

	if(size <= size_dest)
		return(size_src + size);

	all_size = size_dest + size_src;
	while ((src[index] != '\0') && (size_dest < size))
	{
		dest[size_dest] = ((unsigned char *)src)[index];
		size_dest++;
		index++;
	}
	dest[size_dest - 1] = '\0';
	return(all_size);
}

int main(void)
{
	char dest[20];
	char src[6];
	unsigned int total;

	memcpy(dest, "Hello \0@@@@@@@@@@@@", 20);
	memcpy(src, "There", 6);
	total = ft_strlcat(dest, src,10);

	memcpy(dest, "Hello \0@@@@@@@@@@@@", 20);
	memcpy(src, "There", 6);
	total = strlcat(dest,src,10);

	memcpy(dest, "Hello \0@@@@@@@@@@@@", 20);
	memcpy(src, "There", 6);
	total = ft_strlcat(dest, src,12);

	memcpy(dest, "Hello \0@@@@@@@@@@@@", 20);
	memcpy(src, "There", 6);
	total = strlcat(dest,src,12);

	memcpy(dest, "Hello \0@@@@@@@@@@@@", 20);
	memcpy(src, "There", 6);
	total = ft_strlcat(dest, src,6);

	memcpy(dest, "Hello \0@@@@@@@@@@@@", 20);
	memcpy(src, "There", 6);
	total = strlcat(dest,src,6);

	memcpy(dest, "Hello \0@@@@@@@@@@@@", 20);
	memcpy(src, "There", 6);
	total = ft_strlcat(dest, src,2);

	memcpy(dest, "Hello \0@@@@@@@@@@@@", 20);
	memcpy(src, "There", 6);
	total = strlcat(dest,src,2);

	memcpy(dest, "Hello \0@@@@@@@@@@@@", 20);
	memcpy(src, "There", 6);
	total = ft_strlcat(dest, src,0);

	memcpy(dest, "Hello \0@@@@@@@@@@@@", 20);
	memcpy(src, "There", 6);
	total = strlcat(dest,src,0);

	memcpy(dest, "Hello \0@@@@@@@@@@@@", 20);
	memcpy(src, "There", 6);
	total = ft_strlcat(dest, src,7);

	memcpy(dest, "Hello \0@@@@@@@@@@@@", 20);
	memcpy(src, "There", 6);
	total = strlcat(dest,src,7);

	memcpy(dest, "Hello There Kenobi", 19);
	memcpy(src, "There", 6);
	total = ft_strlcat(dest, src,24);

	memcpy(dest, "Hello There Kenobi", 19);
	memcpy(src, "There", 6);
	total = strlcat(dest,src,24);

	return(0);
}
