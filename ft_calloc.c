/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavascon <mavascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 00:54:45 by mavascon          #+#    #+#             */
/*   Updated: 2026/04/23 23:32:15 by mavascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*new;
	size_t			i;

	if (size && nmemb > (SIZE_MAX) / size)
		return (NULL);
	new = malloc(nmemb * size);
	if (!new)
		return (NULL);
	i = 0;
	while (i < nmemb * size)
		new[i++] = 0;
	return (new);
}
/* #include <stdio.h>
#include "libft.h"

int main(void)
{
		// Teste 1 — array de chars
		char *s = ft_calloc(1, sizeof(char));
		printf("Aqui tem de ser nada: %s\n", s);
		s[0] = 'H';
		s[1] = 'i';
		printf("Aqui ja tem coisas: %s\n", s);				 
		free(s);		
} */