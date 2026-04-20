/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavascon <mavascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 00:02:14 by mavascon          #+#    #+#             */
/*   Updated: 2026/04/19 00:34:01 by mavascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*d;

	d = NULL;
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == (unsigned char)c)
			d = s;
		s++;
	}
	if (((unsigned char)c) == '\0')
		return ((char *)s);
	return ((char *)d);
}
