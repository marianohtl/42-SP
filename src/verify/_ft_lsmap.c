/* ********************************************************************************* */
/*                                                                  /\_____/\        */
/*   ft_lstmap.c                                                  /  o   o  \       */
/*                                                                ( ==  ^  == )      */
/*   Re-code the function lstmap.                                 )         (       */
/*                                                           (           )      */
/*                                                               ( (  )   (  ) )     */
/*                                                              (__(__)___(__)__)    */
/*                                                                                   */
/* ********************************************************************************* */
/*

ft_lsmap.c

Parameters
#1 The address of a pointer to an element.
#2 The address of the function used to iterate on the list.
#3 The address of the function used to delete the content of an element if needed.

Return Value
The new list. NULL if the allocation fails.

External Functions
mallloc, free

Description
Iterates the list 'lst' and applies the function 'f' to the content of each element. Creates a new list resulting of the successive applications of the function 'f'. The 'del' function is used to delete the content fo an element if needed.

*/

#include"libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void*),void(*del)(void*))
{
	t_list *nxt_lst, *current_lst, *previous_lst, *copy_lst;
	nxt_lst = lst;
	previous_lst = ((void*)0);
	while (nxt_lst->next != (void*)0)
	{
		current_lst = malloc(sizeof(t_list));
		current_lst->content = f(nxt_lst->content);
		if(previous_lst == (void*)0)
		{
			copy_lst = current_lst;
			previous_lst = current_lst;
		}else{
			previous_lst->next = current_lst;
		}
		nxt_lst= nxt_lst->next;
	}
	return(copy_lst);
}
