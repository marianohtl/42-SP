#ifndef LIBFT_H
#define LIBFT_H

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
unsigned int ft_strlen(char *s);
void *ft_memset(void *s, int c, unsigned int n);
void ft_bzero(void *s, unsigned int n);
void *ft_memcpy(void *dest, const void *src, unsigned int n);


#endif
