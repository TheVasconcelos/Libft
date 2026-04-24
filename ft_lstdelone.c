/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavascon <mavascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 22:12:23 by mavascon          #+#    #+#             */
/*   Updated: 2026/04/24 01:56:37 by mavascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}

/* void del(void *c) { free(c); }

int main(void)
{
	t_list *lst = ft_lstnew(ft_strdup("42"));
	printf("%s\n", (char *)lst->content);
	ft_lstdelone(lst, del);
	printf("deleted\n");
} */
