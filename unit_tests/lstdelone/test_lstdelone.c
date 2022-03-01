
#include "../unit_test.h"
#include<stdio.h>
#include <string.h>
#include<stdlib.h>


void test_lstdelone(t_list *lst, void (*del) (void *), char compare)
{
	char *result;
	int i = 0;
	unsigned int width;

	if (lst != NULL)
		result = lst->content;
	ft_lstdelone(lst,del);
	if (lst != NULL && result[0] != compare)
	{
		printf("Return Error `%c`!= `%c`\n", result[0], compare);
		return ;
	}
	printf("Return Ok\n");
}
void    to_a_str(void *content)
{
    char    *string;
    int        index;

    string = content;
    while (string[index] != '\0')
    {
        string[index] = 'a';
        index++;
    }
	free(content);
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
	free(content);
}

int    main(void)
{
    t_list    *lst0;
    t_list    *new0;
    t_list    *lst1;
    t_list    *new1;
    t_list    *new2;

    lst0 = ft_lstnew(ft_strdup("Eu quero ver voce "));
    new0 = ft_lstnew(ft_strdup("me chamar de amendoim"));
    lst1 = ft_lstnew(ft_strdup("Lagartixa"));
    new1 = ft_lstnew(ft_strdup("tixastixa"));
    new2 = ft_lstnew(ft_strdup("Gatinhos"));
    lst0->next = new0;
    new0->next = lst1;
    lst1->next = new1;
    new1->next = new2;
    test_lstdelone(lst0, del_str, '\0');
    test_lstdelone(lst1, to_a_str, 'a');
    test_lstdelone(new2, del_str, '\0');
    test_lstdelone(NULL, del_str, '\0');
}
