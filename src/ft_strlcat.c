/* ********************************************************************************* */
/*                                                                  /\_____/\        */
/*   ft_strlcat.c                                                  /  o   o  \       */
/*                                                                ( ==  ^  == )      */
/*   Re-code the function strlcat.                                 )         (       */
/*   These function do not need any external functions.           (           )      */
/*                                                               ( (  )   (  ) )     */
/*                                                              (__(__)___(__)__)    */
/*                                                                                   */
/* ********************************************************************************* */
/*

*/

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
	if(size_dest == size)
		dest[size_dest - 1] = '\0';
	else
		dest[size_dest] = '\0';
	return(all_size);
}
