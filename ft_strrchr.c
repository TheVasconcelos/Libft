/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavascon <mavascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 00:02:14 by mavascon          #+#    #+#             */
/*   Updated: 2026/04/23 20:00:25 by mavascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*d;

	d = NULL;
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
