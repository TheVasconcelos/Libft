/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavascon <mavascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 22:01:32 by mavascon          #+#    #+#             */
/*   Updated: 2026/04/24 01:55:07 by mavascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/* int main(void)
{
	t_list *lst = ft_lstnew("um");
	ft_lstadd_back(&lst, ft_lstnew("dois"));
	ft_lstadd_back(&lst, ft_lstnew("tres"));

	printf("%s\n", (char *)ft_lstlast(lst)->content);
} */