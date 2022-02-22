#include <stdlib.h>

void *ft_calloc(unsigned int nmenb, unsigned int size){
	void* result = malloc(nmenb * size);
	return result;
}
