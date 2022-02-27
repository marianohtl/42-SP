
#include "../unit_test.h"
#include<stdio.h>
#include <string.h>


void test_putendl_fd(char *s, int fd, char * compare)
{
	dprintf(fd, "`");
	ft_putendl_fd(s, fd);
	dprintf(fd, "` == `%s`\n", compare);

}

int	main(void)
{
	test_putendl_fd("Eu quero ver", 0, "Eu quero ver\n");
	test_putendl_fd("voce me chamar", 1, "voce me chamar\n");
	test_putendl_fd("de amendoim", 2, "de amendoim\n");
	test_putendl_fd(" \\o/", 0, " \\o/\n");
	test_putendl_fd(" \\o/", 1, " \\o/\n");
	test_putendl_fd(" \\o/", 2, " \\o/\n");
}
