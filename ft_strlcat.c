/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavascon <mavascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 22:14:16 by mavascon          #+#    #+#             */
/*   Updated: 2026/04/19 00:36:15 by mavascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	s;

	i = 0;
	while (i < size && dest[i])
		i++;
	if (!src)
		return (i);
	s = ft_strlen(src);
	if (i == size)
		return (i + s);
	j = 0;
	while (i < size - 1 && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (i - j + s);
}

/* 
#include <stdio.h>

int main ()
{
char dest[20] = "123456";
size_t		i = ft_strlcat(dest, "1234567", 20);
printf("%zu", i);
} */