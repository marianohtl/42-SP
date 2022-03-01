
#include "../unit_test.h"
#include<stdio.h>
#include<stdlib.h>
#include <string.h>

void test_lstclear(t_list **lst, void (*del) (void*))
{
	ft_lstclear(lst,del);
	if (*lst != NULL)
	{
		printf("Return Error `%ld`",(long) lst);
		return ;
	}
	printf("Return Ok\n");
}
void    to_a_str(void *content)
{
    char    *string;
    int        index;

	index = 0;
    string = content;
    while (string[index] != '\0')
    {
        string[index] = 'a';
        index++;
    }
}

void    del_str(void *content)
{
    char    *string;
    int        index;

    string = content;
    while (string[index] != '\0')
    {
        string[index] = 0;
        index++;
    }
}

int    main(void)
{
    t_list    *lst0;
    t_list    *new0;
    t_list    *lst1;
    t_list    *new1;
    t_list    *new2;
    t_list    *new3;
    t_list    *lst2;

    lst0 = ft_lstnew(ft_strdup("Eu quero ver voce "));
    new0 = ft_lstnew(ft_strdup("me chamar de amendoim"));
    lst1 = ft_lstnew(ft_strdup("Lagartixa"));
    new1 = ft_lstnew(ft_strdup("tixastixa"));
    new2 = ft_lstnew(ft_strdup("Gatinhos"));
    new3 = ft_lstnew(ft_strdup("zinhos"));
    ft_lstadd_back(&lst0, new0);
    ft_lstadd_back(&lst1, new1);
    ft_lstadd_back(&lst1, new2);
    ft_lstadd_back(&lst1, new3);
	lst2 = NULL;
    test_lstclear(&lst1, to_a_str);
    test_lstclear(&lst0, del_str);
    test_lstclear(&lst2, del_str);
}
