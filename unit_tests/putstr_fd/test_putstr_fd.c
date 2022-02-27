
#include "../unit_test.h"
#include<stdio.h>
#include <string.h>


void test_putstr_fd(char *s, int fd, char * compare)
{
	int i = 0;

	dprintf(fd, "`");
	ft_putstr_fd(s, fd);
	dprintf(fd, "` == `%s`\n", compare);

}

int	main(void)
{
	test_putstr_fd("Eu quero ver", 0, "Eu quero ver");
	test_putstr_fd("voce me chamar", 1, "voce me chamar");
	test_putstr_fd("de amendoim", 2, "de amendoim");
	test_putstr_fd(" \\o/", 0, " \\o/");
	test_putstr_fd(" \\o/", 1, " \\o/");
	test_putstr_fd(" \\o/", 2, " \\o/");
}
