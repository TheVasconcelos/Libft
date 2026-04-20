/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavascon <mavascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 19:10:46 by mavascon          #+#    #+#             */
/*   Updated: 2026/04/20 23:29:55 by mavascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/* int main ()
{
	t_list	*atual;

	atual = malloc(sizeof(t_list));
	if (!atual)
		return (0);

	atual->content = "Teste | ";
	atual->next = NULL;

	printf("%s", (char *)(atual->content));

	atual = ft_lstnew(" final");
	printf("%s", (char *)(atual->content));

} */