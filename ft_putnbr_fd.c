/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavascon <mavascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 18:54:47 by mavascon          #+#    #+#             */
/*   Updated: 2026/05/13 23:18:43 by mavascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	long	div;
	char	c;

	nb = (long)n;
	
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	
	div = 1;
	
	while (div * 10 <= nb)
		div *= 10;
		
	while (div >= 1)
	{
		c = nb / div % 10 + '0';
		write(fd, &c, 1);
		div /= 10;
	}
}
