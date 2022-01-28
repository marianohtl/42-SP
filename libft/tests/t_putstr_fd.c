#include<unistd.h>

void ft_putstr_fd(char *s, int fd)
{
	int index;
	index = 0;

	while(s[index] != '\0')
		index++;

	write(fd, s, index);
}
