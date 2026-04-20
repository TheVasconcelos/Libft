/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavascon <mavascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 22:01:45 by mavascon          #+#    #+#             */
/*   Updated: 2026/04/20 23:05:51 by mavascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	unsigned char	*new;
	size_t			i;

	new = malloc(ft_strlen(s) + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return ((char *)new);
}
/* int main ()
{
	char 	src[] = "Hello ";
	char	new[50];
	printf("Original: %s\n", src);
	printf("New antes: %s\n", new);
	printf("New depois: %s\n", ft_strdup(src));
} */