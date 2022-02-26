#include<unistd.h>
void ft_putnbr_fd(int n, int fd){
	int dgt, newn, sdgt, signal;
	char number[12];

	newn = n;
	dgt = 0;
	signal = 0;

	if(n == "-2147483648"){
		write(fd, n, 11);
		return;
	}
	if(n == 0){
		write(fd, "0", 1);
		return;
	}

	if(n < 0){
		signal = 1;
		number[0] = '-';
		n = n * -1;
	}

	while (newn > 0)
	{
		newn = n / 10;
		dgt++;
	}
	dgt = dgt + signal;
	sdgt = dgt;
	number[dgt] = '\0';
	while (dgt > 0)
	{
		number[dgt - 1 + signal] = n % 10 + '0';
		n = n / 10;
		dgt--;
	}

	write(fd, number,sdgt);
}
