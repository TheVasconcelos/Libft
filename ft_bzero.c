/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavascon <mavascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 19:12:49 by mavascon          #+#    #+#             */
/*   Updated: 2026/04/20 23:47:11 by mavascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/* #include <stdio.h>
#include <string.h>

int main ()
{
	char str[] = "Batatas";
	int 	i;
	ft_bzero(str, 2);
	i = 0;
	while(str[i] != 's')
	{
		write(1, &str[i], 1);			
		i++;
	}
} */