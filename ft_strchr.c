/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavascon <mavascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 22:53:22 by mavascon          #+#    #+#             */
/*   Updated: 2026/04/23 23:52:31 by mavascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *)(s));
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return (NULL);
}

/* #include <stdio.h> 

int main(void)
{
	printf("%s\n", ft_strchr("hello", 'l'));  // llo
	printf("%s\n", ft_strchr("hello", 'h'));  // hello
	printf("%p\n", ft_strchr("hello", 'z'));  // null
	printf("%s\n", ft_strchr("hello", '\0')); // (empty string)
	return (0);
} */