
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
void    *ft_memset(void *b, int c, unsigned int len);
void    ft_bzero(void *s, unsigned int n);
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);
char    *ft_strdup(const char *src);
char    *ft_substr(char const *s, unsigned int start, size_t len);
void *memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);




#endif