/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavascon <mavascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 20:08:16 by mavascon          #+#    #+#             */
/*   Updated: 2026/04/26 15:58:41 by mavascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (n--)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
/* 
#include <stdio.h>
#include <string.h>

int main()
{
	char dest[] = "hello";
	ft_memcpy(dest, "1234567", 3);
	printf("res 1 = %s\n", dest);
	
	char dest2[] = "hello";
	memcpy(dest2, "1234567", 3);
	printf("res 2 = %s\n", dest2);

	return 0;
} */