#include<unistd.h>

void ft_putendl_fd(char *s, int fd){
	int index;
	index = 0;

	while(s[index] != '\0')
		index++;

	write(fd, s, index);
	write(fd, "\n", 1);
}

