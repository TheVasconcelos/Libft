/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavascon <mavascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 13:20:57 by mavascon          #+#    #+#             */
/*   Updated: 2026/04/19 02:49:00 by mavascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int		i;
	int		sign;
	int		result;

	i = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	sign = 1;
	if (nptr[i] == '-')
			sign = -1;
	if (nptr[i] == '-' || (nptr[i] == '+'))
		i++;
	result = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = (result * 10) + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}

/* #include <stdio.h>

 int main ()
{
	char str[] = "+1";
	char str[] = "  +42Lyon";
	char str[] = "  +42Lyon";
	printf("[%d]\n", ft_atoi(str));
	return (0);
} */