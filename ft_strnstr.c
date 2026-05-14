/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavascon <mavascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 00:20:10 by mavascon          #+#    #+#             */
/*   Updated: 2026/05/13 23:44:14 by mavascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		len2;

	i = 0;
	len2 = len;
	if (!ft_strlen(little))
		return ((char *)big);
	while (*big && len2-- > 0)
	{
		if ((ft_strncmp(big, little, ft_strlen((char *)little)) == 0)
			&& (i + ft_strlen((char *)little) <= len))
			return ((char *)big);
		i++;
		big++;
	}
	return (NULL);
}
