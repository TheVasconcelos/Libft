/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavascon <mavascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 22:24:23 by mavascon          #+#    #+#             */
/*   Updated: 2026/04/26 16:09:59 by mavascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_node;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		next_node = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next_node;
	}
}

/* int main(void)
{
	t_list *lst = ft_lstnew(ft_strdup("42"));
	lst->next = ft_lstnew(ft_strdup("Lisboa"));

	ft_lstclear(&lst, free);

	printf(lst ? "NOK\n" : "lst = NULL ✓\n");
} */