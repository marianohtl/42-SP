/* ********************************************************************************* */
/*                                                                  /\_____/\        */
/*   ft_calloc.c                                                   /  o   o  \       */
/*                                                                ( ==  ^  == )      */
/*   Re-code the function calloc.                                  )         (       */
/*   Using the function malloc.                                   (           )      */
/*                                                               ( (  )   (  ) )     */
/*                                                              (__(__)___(__)__)    */
/*                                                                                   */
/* ********************************************************************************* */
/*

*/
#include<stdlib.h>

void *ft_calloc(unsigned int nmenb, unsigned int size){

	unsigned int i;
	unsigned int total;

	i = 0;
	total = nmenb * size;
	char* result = malloc(total);
	while (i < (total))
	{
		result[i] = 0;
		i++;
	}

	return (void *) result;
}
