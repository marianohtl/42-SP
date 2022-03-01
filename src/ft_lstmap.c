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
#include<stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void(*del)(void*))
{
	t_list	*lst_map;
	t_list	*new_lst;

	lst_map = NULL;
	while (lst != NULL)
	{
		new_lst = ft_lstnew(f(lst->content));
		if (new_lst == NULL)
		{
			ft_lstclear(&lst_map, del);
			return (lst_map);
		}
		ft_lstadd_back(&lst_map, new_lst);
		lst = lst->next;
	}
	return (lst_map);
}
