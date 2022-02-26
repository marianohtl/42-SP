#include"libft.h"
//testar caso passe um null pointer para o list, para ver se ocorre um segmentation faul
int ft_lsize(t_list *list)
{
	int length;
	t_list *aux;
	length = 0;
	aux = list;
	while (aux->next != ((void*)0) )
	{
		aux = aux->next;
		length++;
	}
	return length;
}
