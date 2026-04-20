/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavascon <mavascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 02:42:01 by mavascon          #+#    #+#             */
/*   Updated: 2026/04/21 00:03:59 by mavascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(long n)
{
	int		len;

	len = (n <= 0);
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*new;
	int		len;
	long	nb;

	nb = n;
	len = int_len(nb);
	new = malloc(len + 1);
	if (!new)
		return (NULL);
	if (n == 0)
		new[0] = '0';
	if (nb < 0)
	{
		new[0] = '-';
		nb = -nb;
	}
	new [len] = '\0';
	while (len > 0 && nb > 0)
	{
		new[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (new);
}

/* int main()
{
	printf("\n ft_itoa:\n");
	printf("\t%s\n", ft_itoa(-1));
	printf("\t%s\n", ft_itoa(-2147483648));
	printf("\t%s\n", ft_itoa(2147483647));
	printf("\t%s\n", ft_itoa(0));
}   */