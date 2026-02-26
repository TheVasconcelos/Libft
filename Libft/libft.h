
#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>

size_t		ft_strlen(const char	*str);
int     ft_isalnum(int c);
int		ft_isalpha(int	c);
int     ft_isdigit(int c);
int     ft_isprint(int c);
int     ft_isascii(int c);
int     ft_atoi(const char *str);
char *ft_strcpy(char *dest, const char *src);
int ft_strncmp(const char *s1, const char *s2, unsigned int n);




#endif