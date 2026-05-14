/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavascon <mavascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 01:33:07 by mavascon          #+#    #+#             */
/*   Updated: 2026/05/13 23:10:05 by mavascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;

	if (!s)
		return (NULL);
		
	if (start >= ft_strlen(s) || len == 0)
	{
		new = malloc(1);
		if (!new)
			return (NULL);
		new[0] = '\0';
		return (new);
	}
	
	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
		
	new = malloc(len + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (s[start] && len-- > 0)
		new[i++] = s[start++];
	new[i] = '\0';
	return (new);
}
#include <stdio.h> 

int main ()
{
	char  str1[] = "Ola Manuel !!!! ";
	char *str2;

	str2 = ft_substr(str1, 7, 0);
	printf("%s", str2);

}
