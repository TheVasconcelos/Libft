/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavascon <mavascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 00:58:42 by mavascon          #+#    #+#             */
/*   Updated: 2026/04/23 23:29:20 by mavascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* void f(unsigned int i, char *c)
{
	*c += 1;
}

int main(void)
{
	char s[] = "0";

	ft_striteri(s, f);
	return (0);
} */