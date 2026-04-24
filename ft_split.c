/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavascon <mavascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 01:06:13 by mavascon          #+#    #+#             */
/*   Updated: 2026/04/24 01:41:02 by mavascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	counter(char const *s, char c)
{
	int		count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static void	free_split(char **result, int j)
{
	while (j > 0)
		free(result[--j]);
	free(result);
}

static int	builder(char **str, char const *s, char c, int words)
{
	int		i;
	int		j;
	int		start;

	i = 0;
	j = 0;
	while (j < words && s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		str[j] = ft_substr(s, start, (i - start));
		if (!str[j])
		{
			free_split(str, j);
			return (0);
		}
		j++;
	}
	str[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		words;

	if (!s)
		return (NULL);
	words = counter(s, c);
	str = malloc((sizeof(char *) * (words + 1)));
	if (!str)
		return (NULL);
	if (!builder(str, s, c, words))
		return (NULL);
	return (str);
}

/* #include <stdio.h>

int main ()
{
	char	str[] = "Ola---[ inserir nome ]--hehe-!";
	char	**splitter;
	splitter = ft_split(str, '-');
	printf("%s\n", splitter[0]);
	printf("%s\n", splitter[1]);
	printf("%s\n", splitter[2]);
} */