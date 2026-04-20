/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavascon <mavascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 20:14:53 by mavascon          #+#    #+#             */
/*   Updated: 2026/04/19 00:32:27 by mavascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest > src)
		while (n--)
			(((unsigned char *)dest)[n] = ((unsigned char *)src)[n]);
	else
	{
		while (i < n)
		{
			(((unsigned char *)dest)[i] = ((unsigned char *)src)[i]);
			i++;
		}
	}
	return (dest);
}
