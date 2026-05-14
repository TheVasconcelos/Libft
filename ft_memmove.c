/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavascon <mavascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 20:14:53 by mavascon          #+#    #+#             */
/*   Updated: 2026/04/26 16:01:53 by mavascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	i = 0;
	if (d > s)
		while (n--)
			d[n] = s[n];
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

/* #include <stdio.h>
#include <string.h>

int main()
{
	char src[] = "";
	char *dest = src + 2;
	void *after = ft_memmove(dest, src, 3);
	char *res = after;
	printf("Res 1 = %s\n", res);

	char src2[] = "";
	char *dest2 = src + 2;
	void *after2 = memmove(dest2, src2, 3);
	char *res2 = after2;
	printf("Res 2 = %s\n", res);
	return 0;
} */